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

## Scéance du 5 Avril
Pendant la seance nous avons inversé les soudures des deux moteurs , tout les moteurs tournent maintenant dans le bon sens. On a aussi branché la radio sur la FC. Le drone est maintenant pret a voler , il n'y a plus qu'a rajouter les hélices !

## Vendredi 6 Avril
Reconfiguration des ESC : dans le panel moteur mise a 2000 puis descente rapide a 1000. Les ESC 'chantent' alors pendant une seconde pour dire qu'ils sont configurer. Lors de cette phase tout les moteurs ont tourné correctement et les ESC n'ont pas beaucoup chauffé , ce qui est bon signe.

La radio branché , il faut la synchronisée , c'est a dire allumé le drone (lipo branchée) , appuyer pendant une seconde sur le bouton sur le recepteur (il clignote alors) puis allumé la télécommande. Lorsque la liaison est établie on peut voir sur la télécommande le Rx a 5V et la barre de  'reception' est affichée.
Une fois la radio branchée il faut configurer la carte avec cleanflight pour mettre en lien ce qu'on reçois et ce qu'on envoie apres au ESC.
Tout d'abbord j'ai mis en reception le protocol lié a la AT9 , (ATHER ? pas sure du nom). Puis j'ai laissé le protocol des ESC , vu que la carte arrive deja a les faire tourner correctement : oneshot125.
Dans le panel 'receiver' , on peut voir ce que la télécommande envoie actuellement comme info a la carte , notre throttle est inversé c'est a dire qu'a la position haute du stick on est au max et a la basse au min. 
On peut alors voir que pour le raw , pitch , yaw , nos valeur moyenne sont a 1500 (avec un peu de flick) avec un max a ~1950 et un min a ~1000. Pour le throttle le max est a 1950 et le min a un peu moins de 1100.

Il faut donc regler tout sa avant de pouvoir armer les moteurs (la carte refuse pour son bien d'armer avant d'avoir tout configurer).
La configuration que j'ai mise :
<ul>
<li>Dans configuration générale :
 <ul>
  <li>throttle_min : 1100</li>
  <li>throttle_max : 1950</li>
<li>ESC commande min (peut etre pas le bon nom) : 1000 -> si une des valeur de la télécommande passe en dessous de ce seuil la carte considère que les entrées sont erronnée et desarme . De meme pour throttle min et max</li></ul>
  </li>
<li>Dans receiver :
 <ul>
  <li>commande moyenne : 1500</li>
<li>RC dead : 3 -> nos valeur 'flick' d'environ 2 tout le temps , apparement parfois sa fait sa quand la télécommande est trop proche du drone mais sait on jammais. Cette valeur sert a dire que si l'entrée ne change pas d'au moins 3 , la carte considère que la valeur est la même que celle d'avant.</li>
  <li>Pour le throttle cette valeur est d'environ 30 (pas forcement necessaire ?).</li>
 </ul>
 </li>

Apres avoir mis ces parramêtres la carte refusait quand même d'armé les moteurs , donc impossible de tester si finalement en bougeant les stick on arrive a transmettre ce que l'on veut au ESC et moteurs. En effet un parrametre accessible qu'en CLI (interface commande) bloquait , le check_min. Il sert comme les ESC commande min a savoir pour la carte si la valeur envoyé par la télécommande 'throttle' est éronée . La valeur envoyé au minimum par notre receiver est 1083 et le check min était a 1000 donc par sécurité les moteurs étaient bloqué.

Au moment ou j'ai rentré la valeur et sauvegardé , aucun des moteurs n'a tourné (normal vu que j'était sur la télécommande a un throttle de 1083 donc le min) et l'ESC correspondant au moteur n°3 s'est mis soudainement a brûler , une bonne flamme de 10 cm ... J'ai tout de suite débranché la batterie et regardé l'état de celui-ci. Il a l'air d'avoir été endomagé , une partie des circuit dessus s'est dissout et deplacer , pour le moment je n'ai pas tester si il marchait encore mais j'en doute. Le moteur n'a même pas chauffé je presume qu'il na rien mais c'est a tester a la prochaine séance. Les 3 autres esc n'ont rien l'air d'avoir non plus (il n'était pas chaud ,rien) , aussi a tester.

Il peut y avoir plusieurs cause a ce genre d'évenement :
<ul>
<li>L'ESC était au départ defectueux : peu probable étant donné qu'il fesait tourné sans probleme le moteur une heure avant sans chauffé.</li>
<li>Avec les vibrations des essais précedant les soudures qu'on avait faite dessus ce sont touché et ont court-circuité l'ESC : c'est cependant invérifiable étant donné qu'avec la chaleur du feu une partie de ce qu'on avait fait a fondu voire s'est dessoudé totalement pour une partie.</li>
<li>les données envoyé a l'esc par la carte l'ont fait bruler : sur certain forum c'est arrivé a plusieurs personnes que des données completement érronées envoyé a des ESC BLHeli les fasse prendre feu (ils avaient des  log de leur carte). : malheureusement notre carte n'a pas les capacité de faire des log , donc on ne peut pas savoir ce qu'il s'est exactement passé a cet instant.</li>
</ul>

Une piste pour éviter d'en bruler un autre est de receptionée et analyser ce que la carte envoie avec la carte arduino pour comprendre vraiment le protocol oneshot125 et si il est vraiement adapté a nos ESC.

Cependant cet incident soulève une question auquel nous n'avons pas assez reflechit : la sécurité. Par exemple si les hélices était branchée et que les moteurs tournais , je n'aurais pas pu detaché la batterie et du attendre qu'il finisse de s'auto détruire avant de pouvoir faire quoi que ce soit. Il nous faut donc un bouton de forçage (armage des moteurs) sur la télecommande (c'est possible dans la barre des AUX , la configuration est fesable depuis cleanfligt) . Et peut etre un physique aussi ? comme un bouton poussoir pour dire OK ou pas qui prendrait le dessus sur celui de la telecommande.

Flash McDrone ne volera pas aussi aisement que prévu on dirait ...



