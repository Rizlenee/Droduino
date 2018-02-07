# Cahier de suivi du projet de Camille Bauce

* Séance du 22 Décembre 2017 

Recherche d'une idée de projet. Avec mon groupe on est tombé d'accord sur faire un drone , mais quel genre de drone ?
Recherche sur les drones en général et tout ce qui est télécommandé. On décide finalement de se lancer sur le drone FPV de course proposé par Masson. 
Je commence a recherché en quoi un drone de course consiste exactement et a regardé des tutos de montage. 
On fait la liste des élements important de ce type de drone .

* Séance du 12 Janvier 2018

On continue la recherche sur les pieces et leur compatibilité entre elle.
De mon coté je fais plus de recherche sur les hélices et comment les choisirs pour avoir le maximum de propultion, je tombe sur ce site :
http://www.mh-aerotools.de/airfoils/propuls1.htm#TOC
qui explique le fonctionement des hélices et le rapport entre la puissance et le nombre de pales.

On finit par choisir d'utilisé des hélices tripale sur un chassis 5 pouces (taille des hélice).

* Séance du 18 Janvier 2018

Il reste a cherché les moteurs , ESC , batterie et la carte de vol/le controleur de vol.
Ma contribution se fait sur la recherche d'une carte de vol correspondant a nos besoin car on ne peut pas utilisé l'ardupilot donné par Mr Masson.
En effet , elle nécessite beaucoup plus d'énergie et est trop grosse pour la taille du drone , en plus son logiciel et firmware attaché ne permette pas de réalisé facilement les multiples installations leds futures.
On ne peut pas non plus la coder nous meme, les algorithmes de stabilisation sont tres complexe (surtout a optimiser) et les seules ressource libre ne sont compatible qu'avec des cartes arduino retirées du marché ou des shield(gyro et accelerometre) aussi retiré .
Finnalement la carte sera une carte deja codé mais avec le plus d'option possible , soit:
 - une CC3D avec le firmware betaflight ou librePilot 
 - une autre carte supportant librePilot

* Séance du 7 Fevrier 2018
Les premières pièces ont été reçu soit toute les pièces nécessaire au montage du drone sauf la batterie. Avec le trinome , Yasmin et Rizlene , on a commencé a monter le chassit et vérifié que toute les pieces était bien présente. Le résultat après 1h30 de montage a 6 bras :
<img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage1.JPG" width="33%">
<img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage2.JPG" width="33%">
<img src="https://github.com/Rizlenee/Droduino/blob/master/doc/montage3.JPG" width="33%">
