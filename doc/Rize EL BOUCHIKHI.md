# JOURNAL DE BORD 

## SEANCE DU 22/12/2017
Reflexion sur le choix du projet. Hésitation entre un drône (DRODUINO) et un avion avec une piste de décollage (AERODUINO). Finalement, 
après discussion avec le groupe on se met d'accord sur la conception d'un drone puis après le petit debriefing avec Mr Masson qui nous 
propose de faire un drône de course FPV, on choisit donc de faire un drône FPV. Début des recherches sur la conception d'un drone et le 
fonctionnement des FPV. On tombe alors sur un site qui explique assez la construction d'un drone de A à Z, étape par étape (pas un drone
de course toutefois) : https://www.firediy.fr/article/realisation-d-un-drone-a-base-d-arduino-chapitre-1
Listage des composants principaux nécessaire.

## SEANCE DU 12/01/2018
Recherches plus détaillées de quels composants prendre et comment les assembler entre eux (compatibilité). Par exemple, quel moteur pour 
quel type d'hélices. Documentation donc sur des moteurs à choisir (détails surle couple moteur, les kv, le pas...) par rapport aux hélices par rapport au poids prévisionnel maximum de tous le drone: 
![tableau recapitulatif](https://user-images.githubusercontent.com/34765769/35444846-13223814-02b0-11e8-8e38-c6e308306b24.PNG)

source: http://www.dronelis.com/choix-des-moteurs-et-des-helices-pour-un-drone/

Recherche également sur le poids moyen de chaque composant afin d'avoir une idée global de combien de gramme on ne doit pas dépasser pour 
orienter les recherches sur les hélices et les moteurs et plus tard aussi les autres composants, qu'ils ne soient pas trop lourd pour que 
Droduino puisse décoller... (création d'un petit tableau excel ;)). 

Finalement après mise en communs à trois des différentes informations trouvées, nous nous décidons sur des hélices 5pouces (donc un chassis
5pouces) avec trois pales (=hélices tripales) et grossièrement le drone devra faire moins de 800g.

## SEANCE DU 18/01/2017
Choix du chassis, coup de coeur sur un chassis trouvé par Camille qui correspond à la taille choisi et aux caractéristiques que l'on voulait (assez d'espace pour mettre tout les éléments):
![alt tag](https://user-images.githubusercontent.com/34765769/35444845-130c671e-02b0-11e8-815e-68201529b249.PNG)

source: https://www.drone-fpv-racer.com/iflight-r1-x5-220mm-2350.html

Recherche pour ma part sur les ESC et les moteurs (en parallèle avec Yasmin), tandis que Camille se concentre plus sur quelle carte de 
vol. Il nous faut des moteurs autours de plus de 200kv et des ESC correspondants c'est pourquoi je préferais trouver des moteurs et des 
ESC vendus ensemble. De ce fait comparaison des différents moteurs et ESC sur des sites comme ebay, aliexpress et drone-fpv-racer.com 
pour pouvoir faire notre commande (la batterie dépendra des moteurs et ESC choisi).

Finalement, mise de coté de quelques moteurs et ESC et ensemble. Débrief concernant la carte de vol qui sera une carte de vol déjà codée.
Pour la prochaine fois il faudra se décider sur tout les composants. Trouver éventuellement un kit avec tout les composants en même temps ou si l'on opte pour des composants tout seul, s'assurer de la compatibilité entre chacun. Et préparer l'oral dU 22/01/18 (Yasmin ayant déjà commencé le diapo).

## WEEK END DU 20/01/2018
Suite des recherches des composants. Préparation de la présentation. 
Mise en communs des idées d'améliorations pour notre drone (qu'il ait quelques "customisation" par rapport à un simple drone FPV): une
led pour indiquer la batterie, des phares colorés avec de jolies couleurs, un système audio permettant de retrouver le drone (s'il est
par exemple perdu en foret lors d'une course...).

## SEANCE DU 23/01/2018
Oral de présentation du projet. Ecoute des autres projets. En parallèle choix définitif des composants: un kit avec tout le matériel
(même la télécommande) avec un chassis similaire à celui choisi précédemment. Shooting photo inattendu pour les représentants du magazine Casa avec le drone de Julien. Dommage que l'on ait pas été prévenues, on aurait pu s'apprêter pour l'occasion. 
Envoi des liens pour le kit à commander à Mr Masson (la livraison est précu selon le site entre 14 et 17jours).
Le temps que tout arrive, il faudra débuter les recherches sur la mise en place de la led batterie et les autres améliorations.

## SEANCE DU 7/02/2018
Reception du kit (c'est-à-dire toutes les pièces du drone exceptée la batterie commandé à part), vérification que toutes les pièces étaient présentes et début de l'assemblage du chassis qui s'est révélée plus physique que prévu ! On n'a d'abord divisé le travail pour être plus efficace et j'ai commencé à monter la partie supérieur (les espèces de petites colonnes rouges) pendant que Yasmin et Camille s'occupaient du reste, mais on a vite eu besoin de regrouper nos forces et travailler sur la même chose en même temps, notamment sur le serrage des boulons...
<p><img src="https://user-images.githubusercontent.com/34765769/36040753-b29ce33c-0dc6-11e8-9758-a9614520923b.JPG" width="33%"> <img src="https://user-images.githubusercontent.com/34765769/36040725-a0bb4f3c-0dc6-11e8-95d8-c64550b63c26.JPG" width="33%"> <img src="https://user-images.githubusercontent.com/34765769/36040743-a96786e6-0dc6-11e8-886e-2ebf033c44bc.JPG" width="33%"></p>
Pour le chassis, il ne reste plus qu'a fixer la partie supérieur et la partie inférieur ensemble (mais on le fera surement seulement après avoir mis les autres composants pour que ça soit plus facile à manier) et intégrer les autres composants. Puis, quand tout cela sera fini et que l'on aura reçu la batterie, nous pourrons enfin commencer les essais de vols !
Go Droduino !

## APRES-MIDI DU 15/02/2018
Assemblage des moteurs, posage des pieds et des hélices.
<p><img src="https://user-images.githubusercontent.com/34765769/38151115-34f63664-3462-11e8-9956-1a624f9994b2.png" width="50%"><img src="https://user-images.githubusercontent.com/34765769/38151235-be011d20-3462-11e8-8829-007fe61e9d9e.png" width="50%"></p>

## JOURNEE DU 21/02/2018
Comme on ne peut coller les deux cartes (carte de vol et plaque de distribution de l'énergie), Camille est allée au Fablab pour des entretoises afin que les cartes puisses être fixées entre elle et avec le châssis (même si, pour des raisons d'ergonomie, on ne les fixe pas au maximum tout de suite).
<p><img src="https://user-images.githubusercontent.com/34765769/38151835-30c9cecc-3465-11e8-8761-8c88ae11427f.png" width="50%"><img src="https://user-images.githubusercontent.com/34765769/38151823-24c99d50-3465-11e8-9fad-8cf6959da6cc.png" width="50%"></p>

## SEANCE DU 16/03/2018
Soudage des ESC avec les moteurs (préalablement fixés avec de l'adhésif). Mr FERRERO nous d'abord montré comment utiliser le fer à souder de la salle de Tp mais nous a ensuite conseillé d'aller effectuer les soudures au Fablab. On a donc terminé la séance au Fablab pour y faire nos soudures et on en a profité pour souder également des pins sur la carte de vol pour pouvoir y brancher des esc ou autres facilement.
<p><img src="https://user-images.githubusercontent.com/34765769/38151859-4480d7d0-3465-11e8-87b3-625beacd6584.png" width="24%"><img src="https://user-images.githubusercontent.com/34765769/38151864-468f1bc2-3465-11e8-9548-810819a12916.png" width="24%">
  <img src="https://user-images.githubusercontent.com/34765769/38154237-4b716350-3471-11e8-9370-2bda3cc80a21.png" width="24%" ><img src="https://user-images.githubusercontent.com/34765769/38338727-1408feb6-386b-11e8-8249-c765825eb2cc.jpg" width="24%"></p>
  <I>(On avait re-enlevé les hélices peu de temps après les avoir installées car elles ne servent pas encore et sont plus gênantes qu'autre chose pour le moment)</I>
  
  
Il restera encore à souder les esc à la plaque de distribution d'energie ainsi que la batterie (une fois qu'elle sera arrivée).

## APRES MIDI DU 28/03/2018
Retour au Fablab. On y a soudé les esc à la plaque de distribution d'énergie et on a ajouté (on a soudé d'autres) pins sur la carte de vol et la plaque de distribution d'énergie, même si on ne les utilisera pas tous forcément, au cas où. On y a aussi pris quatres nouvelles entretoises et des vis (qu'il faudra changer car trop grandes) pour fixer les cartes.
<p><img src="https://user-images.githubusercontent.com/34765769/38322900-0ed78ed2-383c-11e8-9bd8-6660b87bb412.jpg" width="50%"><img src="https://user-images.githubusercontent.com/34765769/38335934-67ce052e-3860-11e8-8017-b1cdd01d209c.jpg" width="50%"></p>



## SEANCE DU 29/03/2018
On a soudé la prise xt60 male à la carte de distribution. Cette prise permet de brancher la batterie (reçue la semaine d'avant) à la plaque de distribution d'énergie et ainsi d'alimenter tout les composants du drone.
<p><img src="https://user-images.githubusercontent.com/34765769/38336831-772221d8-3863-11e8-8d21-04378046296a.jpg" width="50%"><img src="https://user-images.githubusercontent.com/34765769/38338727-1408feb6-386b-11e8-8249-c765825eb2cc.jpg" width="50%" height="333px"></p>

On a aussi récupéré la caméra et son casque fpv que l'on va bientôt installer.
Maintenant que tout est branché, il faut connecter les esc avec la carte de vol et configurer ses pins (si l'on a le temps car c'est de l'optimisation). Et Tester les moteurs.

## WEEK END DU 31/03/2018
Changement des vis trop longues des cartes pour des vis à la bonne taille (enfin!). Second test des moteurs avec l'application Cleanflight, appli pour la carte de vol, (Camille avait déjà fait un premier test qui au final avait donné les mêmes résultats).Les moteursfonctionnent bien mais ils tournent tous dans le même sens. J'ai essayé d'accéder aux esc pour reconfigurer leur sens de rotation (avec l'application BLHeli) mais les esc sont introuvables (on n'arrive pas à y accéder donc aucune reconfiguration possible). Après quelques recherches il semblerait qu'une solution serait de flasher les esc avec une autre carte arduino ou "simplement" d'inverser les branchements moteurs-esc, pour les moteurs concernés, afin de forcer le sens de rotation que l'on veut.

Interface cleanflight:
<img src="https://user-images.githubusercontent.com/34765769/38423767-27105e2e-39af-11e8-904b-f68d8ce12e21.png">

Interface BLHeli:
<p><img src="https://user-images.githubusercontent.com/34765769/38423769-29bdd99e-39af-11e8-9197-0e369d437109.png"></p>

Parallèlement, nouvelle révélation ! Le nom de "Droduino" avait été soumis a discussion et nous avions envisagé de le changer. Surtout que 'Droduino' est la combinaison de 'drone' et 'arduino' mais nous n'utilisons finalement pas de carte arduino. Notre drone s'appelera donc... Flash McDrone ! (référence au célèbre Flash McQueen). Le nom du project reste toujours 'Droduino', mais le nom du drone en lui-même devient Flash McDrone :D.

## SEANCE DU 05/04/2018
Recherche sur la radio et la télécommande. Début du branchement de la radio à terminer ce week end. (Camille et Yasmin ont aussi pu désouder et resouder dans le sens voulu les moteurs dont on veut inverser le sens de rotation)
To do ce week-end:branchement radio et télécommande; recherches pour les leds batterie et de positionnement pour pouvoir les commander la semaine prochaine (récupérer notamment la taille des leds phares comme celles qu'utilisent Chapoulie et Benjamin Vouillon); nouveau test des moteurs voir si le sens bon auquel cas --> posage des hélices. Puis premiers vols si tout vas bien, enfin ! Youpi :D

## SEANCE DU 09/04/2018
Un des ESC a brulé lors des tests avec la radio/télécommande de Camille. Dessoudage des cet ESC par Camille et Yasmin pendant que je cherchais les éléments à commander à savoir le buzzer et les leds phares. 
Présentation devant les professeurs. Pour le branchements du buzzer (et leds ?) on va surement utiliser une carte arduino en plus pour ne pas avoir à toucher à la carte de vol déjà configuré.

## APRES MIDI DU 23/04/2018
Recherches buzzer et leds. 
Je pense choisir un de ses buzzers : 
<ul><li><a href="https://l.facebook.com/l.php?u=https%3A%2F%2Ffr.aliexpress.com%2Fitem%2FMatek-Lost-Model-Beeper-Flight-Controller-5V-Loud-Buzzer-Built-in-MCU-for-FPV-Drone-Multicopters%2F32851363339.html%3FisOrigTitle%3Dtrue&h=ATOPwMuvNrCNjDTnQTQwDrVCNEWdKG5CEOiayyhIDnfrDdzwXHCbZeBOSqkCvE7ifGKJQrlo8gDJlCTYI93pgorauW_3JXmVmFS4e_VlWg">lien 1</a></li>
  <li><a href="https://l.facebook.com/l.php?u=https%3A%2F%2Ffr.aliexpress.com%2Fitem%2FHGLRC-2-en-1-WS2812B-5-V-LED-avec-Alarme-Buzzer-Moteur-Base-lumi-re-pour%2F32842024243.html%3Fws_ab_test%3Dsearchweb0_0%252Csearchweb201602_4_10152_10065_10151_10344_10068_5722815_10342_10343_10340_10341_5722915_10698_5722615_10697_10696_10084_10083_10618_10305_10304_10307_10306_10302_5722715_5711215_10059_10184_308_100031_10103_441_10624_10623_10622_5711315_5722515_10621_10620%252Csearchweb201603_25%252CppcSwitch_3%26algo_expid%3D69aa0a5a-c26a-4e76-923f-d6597705dd47-12%26algo_pvid%3D69aa0a5a-c26a-4e76-923f-d6597705dd47%26transAbTest%3Dae803_1%26priceBeautifyAB%3D0&h=ATOPwMuvNrCNjDTnQTQwDrVCNEWdKG5CEOiayyhIDnfrDdzwXHCbZeBOSqkCvE7ifGKJQrlo8gDJlCTYI93pgorauW_3JXmVmFS4e_VlWgc(celui ci c'est un buzzer AVEC des leds aussi, donc ça pourrait être sympa)">lien 2</a></li>
  <li><a href="https://l.facebook.com/l.php?u=https%3A%2F%2Ffr.aliexpress.com%2Fitem%2FMatek-WS2812B-LED-5V-Active-Buzzer-6xRGB-LED-Indicator-for-NAZE32-F3-FLIP32-CC3D-Skyline32-Flight%2F32779570201.html%3Fws_ab_test%3Dsearchweb0_0%252Csearchweb201602_4_10152_10065_10151_10344_10068_5722815_10342_10343_10340_10341_5722915_10698_5722615_10697_10696_10084_10083_10618_10305_10304_10307_10306_10302_5722715_5711215_10059_10184_308_100031_10103_441_10624_10623_10622_5711315_5722515_10621_10620%252Csearchweb201603_25%252CppcSwitch_3%26algo_expid%3D69aa0a5a-c26a-4e76-923f-d6597705dd47-17%26algo_pvid%3D69aa0a5a-c26a-4e76-923f-d6597705dd47%26transAbTest%3Dae803_1%26priceBeautifyAB%3D0&h=ATOPwMuvNrCNjDTnQTQwDrVCNEWdKG5CEOiayyhIDnfrDdzwXHCbZeBOSqkCvE7ifGKJQrlo8gDJlCTYI93pgorauW_3JXmVmFS4e_VlWg">lien 3 (un peu comme le précédent mais avec moins de led)</a></li>
  <li><a href="https://l.facebook.com/l.php?u=https%3A%2F%2Ffr.aliexpress.com%2Fitem%2F1pc-Hot-Sale-5V-Active-Buzzer-Alarm-Beeper-With-Cable-for-FPV-Racer-Quadcopter-Drone-DIY%2F32726450101.html%3FisOrigTitle%3Dtrue&h=ATOPwMuvNrCNjDTnQTQwDrVCNEWdKG5CEOiayyhIDnfrDdzwXHCbZeBOSqkCvE7ifGKJQrlo8gDJlCTYI93pgorauW_3JXmVmFS4e_VlWg">lien 4 (principals intérêts de celui la : pas cher et pas besoin de soudure)</a></li>
  </ul>
 
 Et un de ses phares:
 <ul><li><a href="https://fr.aliexpress.com/item/Original-XK-X380-005-LED-Headlights-for-XK-X380-RC-Quadcopter/32543699121.html?ws_ab_test=searchweb0_0,searchweb201602_4_10152_10065_10151_10344_10068_5722815_10342_10343_10340_10341_5722915_10698_5722615_10697_10696_10084_10083_10618_10305_10304_10307_10306_10302_5722715_5711215_10059_10184_308_100031_10103_441_10624_10623_10622_5711315_5722515_10621_10620,searchweb201603_25,ppcSwitch_3&algo_expid=2da7e694-ee86-4ecc-bff9-820bd672ad68-0&algo_pvid=2da7e694-ee86-4ecc-bff9-820bd672ad68&transAbTest=ae803_1&priceBeautifyAB=0">lien 1</a></li>
  <li><a href="https://fr.aliexpress.com/item/Yuenhoang-LED-Bande-60-8mm-De-Frein-Lumi-re-Vol-De-Nuit-Lumi-res-Ceinture-2/32838924777.html?ws_ab_test=searchweb0_0%2Csearchweb201602_4_10152_10065_10151_10344_10068_5722815_10342_10343_10340_10341_5722915_10698_5722615_10697_10696_10084_10083_10618_10305_10304_10307_10306_10302_5722715_5711215_10059_10184_308_100031_10103_441_10624_10623_10622_5711315_5722515_10621_10620%2Csearchweb201603_25%2CppcSwitch_3&algo_expid=2da7e694-ee86-4ecc-bff9-820bd672ad68-3&algo_pvid=2da7e694-ee86-4ecc-bff9-820bd672ad68&transAbTest=ae803_1&priceBeautifyAB=0">lien 2</a></li>
  <li><a href="https://www.banggood.com/fr/5V-Colorful-Highlight-Night-LED-Strip-Switch-Ten-Mode-Remote-Control-with-Receiver-for-Racing-Drone-p-1108965.html?gmcCountry=FR&currency=EUR&createTmp=1&utm_source=googleshopping&utm_medium=cpc_ods&utm_content=heath&utm_campaign=PLA-multi-fr-pc&gclid=CjwKCAjwiPbWBRBtEiwAJakcpNsJLMdbjV2DJl8uKUGJ-r5u9ASyRf2AgU4lrVBQu0a8jSyCv1291BoCkLoQAvD_BwE&cur_warehouse=CN">lien 3</a></li>
  </ul>
  
## APRES MIDI DU 28/04/2018
Choix final pour les phares et le buzzer et commande.
Après configurations avec BLHeli et CleanFlight du drone, Camille a reussi à le faire voler !! Flash McDrone sait voler :D !

## SEANCE DU 02/05/2018
Ayant récupéré les leds strips auprès de Mr Masson précédement. Je me suis documentée sur le fonctionnement des leds et sur la carte arduino pro micro qui va nous servir pour commander les leds, les phares et le buzzer avec la télécommande sans passer par la carte de vol. 

## SEANCE DU 09/05/2018
Tests avec les leds strips. Elles fonctionnent bien et les codes tests avec la librairie sont super funs ! Toutefois, la carte arduino chauffe trop (c'était presque brulant à un moment). C'est surement parce qu'il y a trop de leds (60). J'ai essayé de placer une résistance. Ca chauffe beaucoup moins,voir plus du tout mais du coup il n'y a plus assez de tension et toutes les leds ne s'allument plus... Il faudrait essayer d'avoir une resistance plus petite peut être ou trouver une solution alternative.

## SOIREE DU 20/04/2018
Suite des tests avec les leds strips et écriture d'un premier code simple. Finalement il n'y aura pas besoin de mettre de résistance pour éviter que la carte chauffe, il suffit de diminiuer la luminosité ! Les leds brillent moins fort (ce qui n'est pas plus mal car ça faisait presque mal aux yeux) mais au moins elles sont toutes allumées et la carte arduino ne chauffe plus.

## APRES MIDI DU 24/05/2018
On considère que le drone ne doit plus voler quand on atteint -20% de sa batterie totale. On a du 12V, on doit poser le drone à 9,8V  du coup on prend 10V.
Batterie : -20% 12V --> 9,8V : on prends 10V comme seuil critique 
On a également réglé les channels de la télécommande pour qu'elle puisse gérer l'armage des moteurs, les leds de positions, le buzzer et l'intensité des phares. 
Réglage des channels :
      -CH5 = SwA (moteurs) -> deux positions positions
      -CH6 = SwC (led positions) -> trois positions
      -CH7 = SwD (Buzzer) -> deux positions
      -CH8 = VrB (intensité phares) -> roulette
     
On a récupéré les valeurs qu'envoi la télécommande a chaque position des switchs pour les channels 6, 7 et 8 avec arduino et le serialplotter:
<p><img src="https://user-images.githubusercontent.com/34765769/40559765-236d1a3a-6058-11e8-939f-578feb4749c5.PNG" width="33%"> <img src="https://user-images.githubusercontent.com/34765769/40559773-28409924-6058-11e8-8d74-adf3a7a53c78.PNG" width="33%"> <img src="https://user-images.githubusercontent.com/34765769/40559781-2d9eda98-6058-11e8-8df3-3daf3189bec4.PNG" width="33%"></p>
On voit bien les paliers mais les valeurs ne sont pas très précises, c'est plutôt des fourchettes.

On a également testé les phares reçues. On les a branché à l'arduino, elle même alimenté par le drône (et plus par l'usb) et ça fonctionne mais un des deux phares ne marche pas. Heureusement Mr Masson en a commandé deux donc on pourra brancher les autres à leur place pour avoir deux phares qui fonctionnent (même si en réalité ils n'éclairent pas tellement, les leds strip sont plus lumineuses..). Toutefois, avec les valeurs que l'ont recoit de la télécommande, on n'as pas réussi à faire en sorte que la luminosité change en fonction de comment on troune la petite roulette sur la télécommande donc on a fini par juste mettre une valeur seuil. On a donc que deux états, soit les phares sont allumés, soit ils sont éteints.
Aussi, Yasmin a réussi à faire fonctionner le buzzer, il va donc falloir inclure sont code à l'arduino et l'ajouter sur le drone.


Pour la prochaine fois, Camille va essayer de lire des valeurs plus précises, comme celles que l'on obtient avec Cleanflight. Je dois continuer le code pour les leds strips, et si Camille arrive à avoir des valeurs plus précises les utiliser plutôt que les fourchettes de valeurs que l'on a pour l'instant.

## APRES MIDI DU 25/05/2018
J'ai essayé mon code pour les leds avec le drone mais ça n'as pas fonctionné. Le code est bon mais les valeurs que l'on reçevait de la télécommande n'étaient plus du tout les même que la veille et ce qu'on lisait était assez abbérant.
J'ai donc continué à peaufiner le code des leds pour que chaque position (basse, haute, moyenne, etc) du bouton switch associée aux leds soit une couleur ou un motif différent en utilisant les anciennes valeurs tandis que Camille a cherché à récupérer les même valeurs que cleanflight en regardant directement le code source de cleanflight pour voir comment il faisait pour obtenir des valeurs avec une telle précision.
Comme elle est trop forte, elle a reussi et on a donc maintenant des valeurs bien plus précises pour chaque position du switch :
<p><img src="https://user-images.githubusercontent.com/34765769/40558316-359e4f62-6053-11e8-9b9a-7dde5f430e7e.jpg"></p>
N'est-ce pas magnifique ? :D 
On a aussi les valeurs pour les channels 7 et 8 (associés au buzzer et aux phares):
<p><img src="https://user-images.githubusercontent.com/34765769/40558317-39f356de-6053-11e8-8819-6784ebd2a962.jpg" width="49%"> <img src="https://user-images.githubusercontent.com/34765769/40558320-3ce5a856-6053-11e8-9e66-5fe993cb70b7.jpg" width="49%"></p>

On va donc pouvoir réutiliser ses valeurs dans le code et ça devrait marcher !

## SOIREE DU 27/05/2018 ET JOURNEE DU 28/05/2018
Le dimanche soir, j'ai continué sur le code des leds pour chercher des effets différents mais j'ai quelques difficultés de programmation pour certains effets.

Le lundi 28, nous sommes allées au Fablab avec Camille et Yasmin pour bricoler. On a construit de nouveaux fils à partir d'anciens car nous avions besoin de plusieurs fils qui aient plus d'une 'sortie' car nous avions besoin de plus de sorties que celles disponibles sur la carte de distribution d'énergie et de l'arduino pro micro. En effet certains pins alimentaient plusieurs éléments différents donc on avait par exemple besoin de fils femelle-mâle/mâle (d'un coté femelle, de l'autre 2 mâles) ou femelle-femelle/mâle... pour les grounds et vcc.

Dans l'après midi j'ai encore continué sur le code des leds. Il est maintenant terminé. A chaque position, les leds font quelque chose de différents. Chaque position étant associé à une valeur énvoyée par la télécommande que Camille avait récupérer il y a quelques jours. En outre, les leds consommant trop de courant sur la carte, elles seront alimenter directement par la carte de distribution den l'énergie (en 5V) mais toujours controlé par la pro micro. J'ai aussi rajouté une partie pour le buzzer. Le switch de la télécommande associé au buzzer a 2 position donc j'ai juste associé à la position haute au bip du buzzer en réutilisant le code qu'avait écrit Yasmin.
Il reste à revoir la partie du code pour les phares: est ce qu'on garde juste 2 états (allumés/éteints) ou est ce que, maintenant que l'on récupère des valeurs précisent de la télécommande, on peut programmer une intensité pogressive.
Buzzer et phares demandent peu de courant donc on va pouvoir les alimenter avec l'arduino sans trop de problème.

Reste aussi à tester le code sur le drone demain et voir s'il fonctionne bien. Il faudra aussi terminer le code et terminer, le plus tôt possible, tout les branchements (des éléments ajoutés, dont la caméra FPV) pour pouvoir finir l'assemblage complet avec tout les éléments afin de pouvoir s'entrainer à le faire voler. On sera comme ça peut être capable de faire une démonstration sympas lors de la soutenance. 

## APRES MIDI DU 29/05/2018

Finalisation du code pour et les leds et les phares et les buzzer. Toutefois, quand on a tout branché, selon la position de certains switch, on reçoit des valeurs parfois complètement chaotique. En lisant avec le port série, il semblerait que le problème puisse venir du channel 5 qui ferait bugger les autres. Ou peut être du pin 1 (pin sur lequel on lit les valeurs du CH5) puisque c'est normalement un des pins TX/RX.

## APRES MIDI DU 30/05/2018

Problème de la reception de valeur chaotique résolu. En fait, c'était la fonction show() qui permet d'initialiser les leds dans le code qui interférait avec la réception des valeurs de la télécommande. Du coup on a du remplacher tout les show() dans le code par une fonction que Camille a réussi à écrire qui permet d'utiliser le show() beaucoup, beaucoup moins de fois et du coup on reçoit les bonnes valeurs ! 
Du coup ça y est, le code fonctionne bien ! Les leds changent bien de couleur aux bonnes positions de la switch de la télécommandes
<p><img src="https://user-images.githubusercontent.com/34765769/40820931-d2b76b52-6563-11e8-91d8-e789eae58866.png" width="49%"> <img src="https://user-images.githubusercontent.com/34765769/40820938-d9c07484-6563-11e8-8004-1b6f360bd109.png" width="49%"></p>


le buzzer émet du bruit sur la bonne position du switch correspondant de la télécommande et les phares répondent bien aux commandes également (changement progressif de l'intensité) sauf qu'il y a eu quelques faux contacts et les branchements entre l'alimentation et les phares est infernale et très dure on va donc récouper les fils et les souder entre eux directement.
Voilà à quoi ressemble Flash McDrone actuellement :
<p><img src="https://user-images.githubusercontent.com/34765769/40810874-76666cf6-652f-11e8-8b20-249701e57772.JPG"></p>

Demain, en plus des soudures pour les phares, il restera à terminer l'assemblage finale pour ne plus avoir des fils partout, placer chaque composant à sa place, viser la partie supérieur du chassis une bonne fois pour toute et placer la caméra et fixer les leds. Il faut aussi terminer le rapport déjà commencer pour faire le powerpoint de la présentation.

## MATINEE ET APRES MIDI DU 31/05/2018
DERNIER JOUR ! Soudure des phares avec l'alimentation (provenant de l'arduino) et réarrangement de quelques fils. Collage des leds strip sur tout le contour du châssis qui a demandé de l'endurance. Fixation des phares avec pleins de petits bouts de scotch ce qui a été assez long. Fixation de la carte arduino et du buzzer dans la partie supérieur du châssis que l'on a revissée. Fixation de la caméra à l'avant du drone et de sa batterie en dessous du drone. Le drone est maintenant officiellement terminé ! Et tout fonctionne !
On l'a fait voler et Frash McDrone vole très bien ! Le voilà en plein vol :
<p><img src="https://user-images.githubusercontent.com/34765769/40821108-138624a6-6565-11e8-902a-7932094e10a5.png"></p>
Mais l'attérissage a été un peu violent donc l'hélice qui avait déjà été cassé lors du premier vol d'essai et recollé s'est recassé donc il fonctionne très bien mais on ne peut plus le faire voler. On va essayer de recoller la pale cassée pour pouvoir faire une démonstration lors de l'oral demain. 
Il ne nous reste donc plus que l'oral de présentation. 
En tout cas ce fut une bien belle aventure :) ! Go Droduino, Go !
