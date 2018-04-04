# Cahier de suivi du projet de Camille Bauce

## Séance du 22 Décembre 2017 

Recherche d'une idée de projet. Avec mon groupe on est tombé d'accord sur faire un drone , mais quel genre de drone ?
Recherche sur les drones en général et tout ce qui est télécommandé. On décide finalement de se lancer sur le drone FPV de course proposé par Masson. 
Je commence a recherché en quoi un drone de course consiste exactement et a regardé des tutos de montage. 
On fait la liste des élements important de ce type de drone .

## Séance du 12 Janvier 2018

On continue la recherche sur les pieces et leur compatibilité entre elle.
De mon coté je fais plus de recherche sur les hélices et comment les choisirs pour avoir le maximum de propultion, je tombe sur ce site :
http://www.mh-aerotools.de/airfoils/propuls1.htm#TOC
qui explique le fonctionement des hélices et le rapport entre la puissance et le nombre de pales.

On finit par choisir d'utilisé des hélices tripale sur un chassis 5 pouces (taille des hélice).

## Séance du 18 Janvier 2018

Il reste a cherché les moteurs , ESC , batterie et la carte de vol/le controleur de vol.
Ma contribution se fait sur la recherche d'une carte de vol correspondant a nos besoin car on ne peut pas utilisé l'ardupilot donné par Mr Masson.
En effet , elle nécessite beaucoup plus d'énergie et est trop grosse pour la taille du drone , en plus son logiciel et firmware attaché ne permette pas de réalisé facilement les multiples installations leds futures.
On ne peut pas non plus la coder nous meme, les algorithmes de stabilisation sont tres complexe (surtout a optimiser) et les seules ressource libre ne sont compatible qu'avec des cartes arduino retirées du marché ou des shield(gyro et accelerometre) aussi retiré .
Finnalement la carte sera une carte deja codé mais avec le plus d'option possible , soit:
 - une CC3D avec le firmware betaflight ou librePilot 
 - une autre carte supportant librePilot

## Séance du 7 Fevrier 2018
Les premières pièces ont été reçu soit toute les pièces nécessaire au montage du drone sauf la batterie. Avec le trinome , Yasmin et Rizlene , on a commencé a monter le chassit et vérifié que toute les pieces était bien présente. Le résultat après 1h30 de montage a 6 bras :
<img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage1.JPG" width="33%">
<img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage2.JPG" width="33%">
<img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage3.JPG" width="33%">

## 15 Fevrier 2018
Assemblage des moteurs et des esc sur le chassit. On en a aussi profiter pour vérifié les couples moteurs hélices , en effet les quatres hélices ne sont pas 'montées' dans le même sens , c'est a dire qu'elles produisent pour le même sens de rotation soit une poussée vers le haut soit vers le bas. Les deux d'une même couleur sont inversée et les moteurs avec la même couleurs d'écrou sont de même sens.
<p><img src="https://user-images.githubusercontent.com/34765769/38151235-be011d20-3462-11e8-8829-007fe61e9d9e.png" width="50%"></p>

## 21 Fevrier 2018
Le chassit du drone est compacte et on a besoin de fixer correctement la carte de vol pour ne pas embrouiller les capteurs avec des vibrations lors du vol ; la carte et plus précisement le magnétomêtre doit etre relativement éloigné de la carte de distibution ou un fort courrant passe car il pourrait déregler le capteur. Pour cela je suis allé chercher et tester quelques materiels au fablab, conclusion : des entretoises de 1cm (maxi car apres on ne peut plus visser la partie superieure du drone) pour séparer les deux cartes et des vis et écrous pour tenir le tout feront l'affaire.
<p><img src="https://user-images.githubusercontent.com/34765769/38151835-30c9cecc-3465-11e8-8761-8c88ae11427f.png" width="50%"><img src="https://user-images.githubusercontent.com/34765769/38151823-24c99d50-3465-11e8-9fad-8cf6959da6cc.png" width="50%"></p>

