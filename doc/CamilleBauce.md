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
Le chassit du drone est compacte et on a besoin de fixer correctement la carte de vol pour ne pas embrouiller les capteurs avec des vibrations lors du vol ; la carte et plus précisement le magnétomêtre doit etre relativement éloigné de la carte de distibution ou un fort courrant passe car il pourrait déregler le capteur. Pour cela je suis allé chercher et tester quelques materiels au fablab, conclusion : des entretoises pour séparer les deux cartes et des vis et écrous pour tenir le tout feront l'affaire.
<p><img src="https://user-images.githubusercontent.com/34765769/38151835-30c9cecc-3465-11e8-8761-8c88ae11427f.png" width="50%"><img src="https://user-images.githubusercontent.com/34765769/38151823-24c99d50-3465-11e8-9fad-8cf6959da6cc.png" width="50%"></p>

## Scéance du 16 Mars 2018
Durant cette scéance nous avions prévu de commencer a souder les ESC au moteur. Malheureusement on ne peut pas prevoir dans quel sens vont tourner les moteurs apres cette soudure , nous allons donc devoir sans doute en refaire ou changer un parramêtre directement dans le programme des ESC (je ne sais pas comment faire mais c'est apparement possible lorsqu'ils sont connectés à la carte de vol).
M.Ferrero nous a montrer comment faire puis conseillé d'aller au fablab faire les soudure avec un meilleur appareil , ce que nous avons fait. A la fin de la scéance nous avions fini toute les soudures entre ESC et moteur et même commencer celle de pin sur la FC (flight controller = carte de vol). Ces pins permettrons une meilleure 'modularité' dans le sens ou l'on pourra débrancher et rebrancher les composants tel que la radio ou les futures leds facilement et à volonté (et surtout de travailler tranquillement sans poste a souder).
Il ne reste que quelques soudure suplémentaire : ESC - carte de distribution et quelque pins manquant.
<p><img src="https://user-images.githubusercontent.com/34765769/38151864-468f1bc2-3465-11e8-9548-810819a12916.png" width="40%">
  <img src="https://user-images.githubusercontent.com/34765769/38154237-4b716350-3471-11e8-9370-2bda3cc80a21.png" width="50%"></p>

## 28 Mars 2018
Au fablab on arrive a faire les dernières soudures , c'est a dire que les esc sont maintenant completement connectés et les pins prets a être branchés. En même temps on remarque que les premieres entretoises choisie étaient finalement trop petite donc on les change pour des 1cm (maxi car après on ne peut plus visser la partie superieure du drone).

## Scéance du 29 Mars 
La dernière soudure est faite , c'est a dire que la prise XT60 de la batterie peut maintenant etre branchée a la carte de distribution et ainsi allimenter la FC , ESC et moteur. On peut maintenant brancher et tester la radio , la camera FPV, et vérifier le sens des moteurs.
Ainsi l'apres midi , je charge en partie une de nos batteries avec le chargeur Imax b6 , quelques rapels pour les prochaines fois :
<ul><li>penser à connecter les pinces crocodiles</li>
 <li>vérifier que le programme est soit sur LIPO charge ou LIPO balance et surtout 3S</li>
 <li>placer le chargeur sur une surface non conductrice et froide (le sol par example)</li>
<li>charger a un ampérage de maximum capacité de la baterie , soit pour la notre a 1550mAh max : 1.5A</li></ul>

Voici le montage exact pour recharger :
<p><img src ="https://user-images.githubusercontent.com/34765769/38322399-91de6ff0-383a-11e8-9991-9b4da792d61c.jpg"></p>
Une fois chargé partiellement j'ai testé le sens de rotation des moteurs et ils tournent tous dans le même sens ! Ce qui correspond que les moteurs 1 et 4 sont inversés. Il faut donc trouver un moyen d'inverser leur sens de rotation.

## Week end du 31 Mars au 1er Avril 2018
Rizlene et moi chacune de notre coté avont fait nos recherche pour trouver un moyen d'inverser le sens de rotation des deux moteurs. Une solution qui a parru d'abbord simple était d'inversé le sens grâce a un parramêtre normalement changeable du programme des ESC. Malheureusement celui-ci n'est pas accessible car on ne peut pas communiquer avec nos ESC depuis la FC et ils ne présente pas de 'pin' visible pour communiquer , on en est arrivé a la conclusion que nos ESC n'était finalement pas programable , nous allons donc dessouder ces deux moteurs et les ressouder en inverssant leur + et - , ce qui aura pour effet d'inversé leur sens actuels de rotation. 




