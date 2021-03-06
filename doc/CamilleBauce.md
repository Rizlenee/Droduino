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
<img src="https://user-images.githubusercontent.com/34765769/36040753-b29ce33c-0dc6-11e8-9758-a9614520923b.JPG" width="33%">
<img src="https://user-images.githubusercontent.com/34765769/36040725-a0bb4f3c-0dc6-11e8-95d8-c64550b63c26.JPG" width="33%">
<img src="https://user-images.githubusercontent.com/34765769/36040743-a96786e6-0dc6-11e8-886e-2ebf033c44bc.JPG" width="33%">

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

## 26 et 27 Avril
<p><ul>
 <li>remplacement de l'esc qui avait brulé.</li>
 <li>Test du moteur n°3 avec son esc : l'esc répond et le moteur tourne normalement sans surchauffe</li>
 <li>Recalibrage des quatres esc ensemble : reussit</li>
 <li>Reglage de la throttle value de la telecommande , le stick était configuré a l'envers. mode -> reverse -> trottle -> rev. La valeur est maintenant bien a 1086 lorsque le stick est en bas et 1850 lorqu'il est en haut (min et max)</li>
 <li>mise en place d'une sécurité : le stick 'C' doit etre poussé tout en haut pour armé les moteurs. Des qu'il est sur un autre position les moteurs sont désarmés. (correspond a AUX1 sur cleanflight)</li>
 <li>reglage du min_check a 1100 dans le CLI de cleanflight . NB : ne pas oublier la commande save apres une modification dans le CLI.</li>
 <li>Test de mise en marche des moteurs avec la télecommande reussit. Les moteurs n'arment pas sans le stick 'C' , ne tourne plus avant de lever le throttle (min_throttle a 1000 au lieu de 1100 -> la commande de base envoyée aux esc était trop haute).</li>
 <li>branchement des +/- 12V sur le Vbat donne en temps réel le voltage de la batterie.</li>
 
 </p>

## 28 Avril
<p> IL VOLE !!! </p>
<p>Un petit coucou de flash MacDrone : </p>
<p><img src ="https://user-images.githubusercontent.com/34765769/39389619-8e5234cc-4a8a-11e8-8c47-b4d3b5b6c40c.gif"></p>

## 20 et 21 Mai
<p>Il faut maintenant recuperer les informations des channels AUX (1,2,3,4) du receiver/AT9S pour pouvoir les utiliser avec la carte arduino nano/micro . Le receiver communique en PWM avec la FC , il faudrait trouver un moyen de transformé ce signal en une valeur (comme le fait la FC) pour pouvoir l'utilisé plus facilement. La manette possède 3 type de bouton qui peuvent etre utilisé avec les systeme des AUX : les switch simple (2 positions) , les switch B et C a 3 positions , les boutons 'tournants' VrA et VrB qui renvoie une valeur continue entre leur min et leur max.
Ainsi on a :</p>
<p><img src ="https://user-images.githubusercontent.com/34765769/40329707-b20fd61c-5d4a-11e8-96ce-743a203746fb.JPG"></p>
<p>Les channels accessible seraient donc les AUX1 , AUX2 et AUX4 correspondant au CH5 , 6 et 8. Le channel 7 ainsi que l'aux 3 n'ont pas repondu a aucun des tests que ce soit avec les switch ou les manettes , la channel 7 renvoie un signal plat constant peut importe sa configuration.
Il ne nous reste donc que deux channel disponible (car un est blocké par la sécurité d'armage des moteurs) pour les phares / led de position et le buzzer.
Recuperer le dernier AUX permettrait donc d'avoir un bouton par ajout.

Idée :
- utiliser un switch 2 positions pour la securité moteur
- utiliser un switch 3 positions pour le buzzer : étein, bip a interval régulier , bip continu
- utiliser un bouton tournant pour les phares : la valeur continue permettrait de regler avec precision la luminosité , do 0% (eteind) a 100%.
- (optionel) utiliser un switch 3 positions pour les led de positon : éteind ,allumer avec une certaine intensité (50%) , allumer a 100%
</p>

## 24 Mai
<p>La journée a été consacré uniquement au projet et on a fait de grandes avancées. Le but du jour était de récupérer les informations transmise par le receiver et donc de transformer le PWM en valeur exploitable par notre code : PWM -> int .
La solution que nous avons trouvé et mis en pratique est : capturé pendant 200ms les tensions d'entrée des trois channel : CH6 , CH7 et CH8 , puis pour chacune d'entre elle faire la moyenne. On obtient donc une tension moyenne pas très stable mais qui suit relativement ce a quoi on s'attendait , voici donc les visuels des valeurs moyennes obtenue avec port plotter pour les trois channels :</p>

<p><img src="https://user-images.githubusercontent.com/34765769/40559765-236d1a3a-6058-11e8-939f-578feb4749c5.PNG" width="33%"> <img src="https://user-images.githubusercontent.com/34765769/40559773-28409924-6058-11e8-8d74-adf3a7a53c78.PNG" width="33%"> <img src="https://user-images.githubusercontent.com/34765769/40559781-2d9eda98-6058-11e8-8df3-3daf3189bec4.PNG" width="33%"></p>

<p>J'ai aussi testé les phares que l'on avait reçu quelques jours avant .Malheureusement un des deux ne fonctionne pas , de plus l'intensité lumineuse émise par celui qui fonctionne est beaucoup plus faible que ce a quoi je m'attendais , il éclaire moins que les leds même a son intensité maximum ! Les phares même si ils ne pouront pas éclairer correctement reste une touche très esthetique sur le petit drone , bien que pas très utile (rajoutant même un peu de poids pour pas grand chose).</p>
<p>En fin de journée on avait donc : le code du buzzer et ses branchements pret , les phares branché et les valeurs des entrées bien que pas très stable.</p>

## 25 Mai

<p>En retestant les valeurs d'entrée obtenue grace a notre programme d'hier , on remarque qu'elles ont toutes changé , les valeurs seuils (manette débranchée , position haute et basse , ...) ne sont plus les mêmes. Il faut trouver un moyen d'obtenir des valeurs stables dans le temps comme celle obtenue par la FC grâce a cleanflight.
 Cleanflight , le logiciel embarqué dans notre carte de vol , étant en open source , je vais jeté un coup d'oeil au code permettant de récuperé ces valeurs. Je vois qu'il existe des fonctions sur l'arduino qui se déclenche lorsque l'entrée passe d'un état bas a un état haut (rising) et inversement (falling) , ces fonctions sont donc appelées en dehors/en parrallele de la loop() et ne gène donc pas l'execution de la boucle principale.  Ainsi j'arrive a obtenir très vite des valeurs d'entrées stable (les même que celle de cleanflight) qui par cette méthode ont aussi l'avantage d'etre mis a jour instantanément (contre 200ms avant) . 
 </p>
 <p>En résumé sur le serial port plotter :</p>
 <p><img src ="https://user-images.githubusercontent.com/34765769/40558316-359e4f62-6053-11e8-9b9a-7dde5f430e7e.jpg"></p>
 <p><img src ="https://user-images.githubusercontent.com/34765769/40558317-39f356de-6053-11e8-8819-6784ebd2a962.jpg"></p>
 <p><img src ="https://user-images.githubusercontent.com/34765769/40558320-3ce5a856-6053-11e8-9e66-5fe993cb70b7.jpg"></p>
 
 ## 28 Mai
 <p>Petit tour au Fablab pour créer des jonctions de cable arduino , en effet nous besoin de plus de sorties que celles disponible sur la carte de distribution d'énergie et de l'arduino pro micro.Il nous fallait donc des cables possèdant une entrée et plusieur sortie , le voltage ne changeant pas lorque l'on rajoute des élements en parrallèle.
 </p>
<p>On a aussi toute enssemble prevu les dernièrs branchement et emplacements des derniers composants sur le drone .Le courant pour le buzzer et les phares étant très faible , on les branchera directement a l'arduino .Cependant le led strip (60 leds de position) necessite plus de courant et sera donc directement alimenté par la batterie (et en 5V grace a la carte de distribution) bien que controlé par l'arduino. </p>

## 29 Mai
<p>On assemble tout les morceaux de code enssemble , c'est a dire la reception du signal et les controle des leds/phares/buzzer.
Lorsque tout est branché , les valeurs sont parfois stable , parfois chaotique. Le probleme viendrait du pin 1 ou CH5 qui ferait bug toute les autre , a voir.
</p>

## 30 Mai
<p>Les valeurs n'étaient finalement pas stable a cause du code. En effet on récupere les valeurs avec des fonction 'Interrupt' , ces fonctions sont lié a une action (ici la detection d'un front montant ou descendant sur l'un des pin associé) . Les interrupt arretent l'exection de la fonction en cours pour y revenir ensuite (la ou elle s'était arretée), lorque la fonction lié a l'interrupt a fini son execution. Chaque appel d'interruption se stocke/s'accumule lorsque la fonction dans laquelle on se trouve actuellement ne peut pas etre interompu.</p>

<p>Le code qui permetait de recupérer les valeurs fonctionne de la manière suivante :
 -je detecte un front montant : je sotcke le temps actuel puis j'attache une interruption sur un front descendant
 -je detecte un front descendant : ma valeur vaut 'mon temps actuel'- 'temps de front montant' , puis j'attache une interruption sur un front montant (ainsi on boucle)
Le probleme avec sa est que si plusieur interruption s'accumule , alors elle vont toute s'executer d'affilé et les valeur seront alors tres faible par rapport a celle reçu (et tres fausse aussi). Deuxieme probleme , si un front descendant tombe pendant une fonction qui ne peut etre interompue , alors l'interuption va avoir du retard et la valeur sera plus grande que celle de départ. Les valeurs seront donc chaotique si les interruption sont toujours active et valide durant ce genre de fonction.</p>

<p>La fonction qui ne peut pas etre interrompue dans notre programme est la fonction show() de adafruit neopixels qui permet de transferer les nouvelles données de couleurs et intensité au led_strip. Nous avons 60 leds en serie , la transmission de ces données par la fonction show était donc plutot longue ou du moins assez pour faussé toute nos valeur.
La solution que j'ai trouvé est donc de 'detaché' toute les interruptions le temps de cette fonction puis de les rattaché (sur front montant) juste après. Ainsi on perd toute les valeurs reçu durant ce temps mais les valeurs traitées au final sont toute stable.</p>

## 31 Mai

<p>Dernier jour , dernier assemblage. Il faut trouver comment agencer tout les fils et les composants de tel façon a ce qu'il ne soit pas trop sensible au varariation et ne puisse pas toucher les hélices en vol.
Voici un avant/après de flash McDrone :</p>

<p><img src="https://user-images.githubusercontent.com/34765769/40810874-76666cf6-652f-11e8-8b20-249701e57772.JPG" width="49%"> <img src="https://user-images.githubusercontent.com/34765769/40813124-89a8de8e-6539-11e8-8f51-ae5ec98aa746.png" width="49%"> </p>

<p>L'emplacement du buzzer et de la carte arduino pro micro a été difficile a trouver. Finalement j'ai eu besoin d'une petite plaque en bois pour les coller dessus et les placés sur les vis , juste derriere la camera fpv. (la batterie de la camera fpv est collé avec de l'adhesif sous le drone)</p>

<p><img src="https://user-images.githubusercontent.com/34765769/40811032-01c60644-6530-11e8-84aa-4804c95e6adf.JPG"> </p>

<p>Apres avoir fini les fixations , tout fonctionne du premier coup! La team se reunit dehors pour le 1er vol de Flash McDrone avec toute ses fonctionnalité. Il n'a aucun probleme a s'envoler et a voler un peu , il est très stable. Lors de l'atterisage pas très en douceur grace a un pilote d'excetion (moi) mais tout de meme sur ses pattes ; la pale qui s'était deja cassée auparavent se redétache. C'était peu être son premier et dernier vol car nous n'avons pas d'hélice en remplacement ...</p>
