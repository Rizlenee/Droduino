#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define PIN 6 
#define NUMPIXELS 60

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


boolean clignotement = false;
int brightness = 20;

unsigned long timer_led;
unsigned long last_timer_led;
unsigned long tempsEcoule_led;

volatile int CH5_value = 0;
volatile int CH6_value = 0;
volatile int CH7_value = 0;
volatile int CH8_value = 0;
volatile int CH6_value_prec = 0;
volatile int CH5_prev_time = 0;
volatile int CH6_prev_time = 0;
volatile int CH7_prev_time = 0;
volatile int CH8_prev_time = 0;
int pinCH5 = 0;
int pinCH6 = 2;
int pinCH7 = 3;
int pinCH8 = 7;

//Buzzer
int buzzer=4;
//Phares
int phares = 9;

void setup() {
   //Serial.begin(9600);
   pixels.begin();
   pixels.setBrightness(brightness);
   pixels.show(); // Initialise toute les led à 'off'

  // when pin CHx goes high, call the rising function
  attachInterrupt(digitalPinToInterrupt(pinCH5), risingCH5, RISING);
  attachInterrupt(digitalPinToInterrupt(pinCH6), risingCH6, RISING);
  attachInterrupt(digitalPinToInterrupt(pinCH7), risingCH7, RISING);
  attachInterrupt(digitalPinToInterrupt(pinCH8), risingCH8, RISING);




}

void loop() {
  

//Phares
  if(CH8_value >= 1100 && CH8_value < 1900){
    int intensite = (CH8_value -1100 / 800)*255;
    analogWrite(phares, intensite);
  }
  else if(CH8_value >= 1900){
    analogWrite(phares, 255);
  }
  else {
    analogWrite(phares, 0);
  }


//LED
 if (CH5_value > 1500){ //quand c'est pas armé
    clignotement_rouge();
    }
  else{ //quand c'est armé , on affiche les leds en fonction du switch
     //alumage led:
     


 if(abs(CH6_value - CH6_value_prec) > 150){
   
  pixels.setBrightness(brightness);

 if (CH6_value >= 1700 && CH6_value < 2000){ //position basse
      for(int i=0;i<NUMPIXELS;i++){
        pixels.setPixelColor(i, pixels.Color(0,66,77)); //bleu 
      }
      actualisationLed();
    }
    
    else if (CH6_value >= 1200 && CH6_value < 1700){ //position moyenne
      for(int i=0;i<NUMPIXELS;i++){
        pixels.setPixelColor(i, pixels.Color(255, 155, 155)); //blanc un peu rose
      }
      actualisationLed();
    }
    else if (CH6_value < 1200 && CH6_value >= 900 ) { //position haute
        couleurs_tournantes(9);
  
    }
  
    else if (CH6_value < 900 || CH6_value >= 2000 ){ //valeur corrompue
      for(int i=0;i<NUMPIXELS;i++){
        pixels.setPixelColor(i, pixels.Color(128,0,128)); //rose
        actualisationLed();
      }
    } 

 }

  }

//allumage buzzer

  if(CH7_value < 1500 && CH7_value > 500){ //position haute
    bip();
  }


  CH6_value_prec = CH6_value;

}

//fonction inutile mais indispensable
void doNothing(){}

//CH5
void risingCH5() {
  attachInterrupt(digitalPinToInterrupt(pinCH5), fallingCH5, FALLING);
  CH5_prev_time = micros();
}
 
void fallingCH5() {
  attachInterrupt(digitalPinToInterrupt(pinCH5), risingCH5, RISING);
  CH5_value = micros()-CH5_prev_time; //temps du 5V total pour une période
 }

 
 //CH6
void risingCH6() {
  attachInterrupt(digitalPinToInterrupt(pinCH6), fallingCH6, FALLING);
  CH6_prev_time = micros();
  
}
 
void fallingCH6() {
  attachInterrupt(digitalPinToInterrupt(pinCH6), risingCH6, RISING);
  CH6_value = micros()-CH6_prev_time; //temps du 5V total pour une période
  
   
 }

//CH7
void risingCH7() {
  attachInterrupt(digitalPinToInterrupt(pinCH7), fallingCH7, FALLING);
  CH7_prev_time = micros();
}
 
void fallingCH7() {
  attachInterrupt(digitalPinToInterrupt(pinCH7), risingCH7, RISING);
  CH7_value = micros()-CH7_prev_time;
}

//CH8
void risingCH8() {
  attachInterrupt(digitalPinToInterrupt(pinCH8), fallingCH8, FALLING);
  CH8_prev_time = micros();
}
 
void fallingCH8() {
  attachInterrupt(digitalPinToInterrupt(pinCH8), risingCH8, RISING);
  CH8_value = micros()-CH8_prev_time;
}


void bip(){
  tone(buzzer, 1000, 100); //fréquence = 1000Hz --> bruit strident clair 
}

  void clignotement_rouge(){
    //timer
    last_timer_led = timer_led;
    timer_led = millis();
    tempsEcoule_led += timer_led - last_timer_led;
    
    if(tempsEcoule_led > 200){//toutes les demi secondes, on refait ce qu'il y a dans le if, on va donc avoir les leds qui clignotent !
      
      if(clignotement){ //changement de brightness grace a clignotement (une fois sur deux)
        pixels.setBrightness(brightness);
        clignotement = !clignotement;
      }
      else{
        pixels.setBrightness(0); 
        clignotement = !clignotement;
      }   
      
      for(int i=0;i<NUMPIXELS;i++){//actualise les led en rouge
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      }
      actualisationLed(); 
       
      tempsEcoule_led = 0;      //remet le temps a 0
   }
 }

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

  void couleurs_tournantes(uint8_t temps){ //
    last_timer_led = timer_led;
    timer_led = millis();
    tempsEcoule_led += timer_led - last_timer_led;

      int i, j;
     
    if (tempsEcoule_led>temps){
      for(j=0; j<256; j++){
        for(i=0; i<pixels.numPixels();i++){
          pixels.setPixelColor(i, Wheel((i+j) & 255)); 
          
        }
        
      }
      actualisationLed();
      tempsEcoule_led=0;
    }
   }

   void actualisationLed(){
      attachInterrupt(digitalPinToInterrupt(pinCH5), doNothing, CHANGE);
      attachInterrupt(digitalPinToInterrupt(pinCH6), doNothing, CHANGE);
      attachInterrupt(digitalPinToInterrupt(pinCH7), doNothing, CHANGE);
      attachInterrupt(digitalPinToInterrupt(pinCH8), doNothing, CHANGE);
      pixels.show();
      attachInterrupt(digitalPinToInterrupt(pinCH5), risingCH5, RISING);
      attachInterrupt(digitalPinToInterrupt(pinCH6), risingCH6, RISING);
      attachInterrupt(digitalPinToInterrupt(pinCH7), risingCH7, RISING);
      attachInterrupt(digitalPinToInterrupt(pinCH8), risingCH8, RISING);
   }


