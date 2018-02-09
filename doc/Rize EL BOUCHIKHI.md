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
<p><img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage1.JPG" width="33%"> <img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage2.JPG" width="33%"> <img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage3.JPG" width="33%"></p>
Pour le chassis, il ne reste plus qu'a fixer la partie supérieur et la partie inférieur ensemble (mais on le fera surement seulement après avoir mis les autres composants pour que ça soit plus facile à manier) et intégrer les autres composants. Puis, quand tout cela sera fini et que l'on aura reçu la batterie, nous pourrons enfin commencer les essais de vols !
Go Droduino !

