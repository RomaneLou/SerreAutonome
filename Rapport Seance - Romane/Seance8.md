Séance 8

Il s'agit de notre dernière séance. L'objectif a donc été de terminer notre serre.
Nous avons commencé par terminer la construction du toit. Pour cela nous avons découper au laser les deux dernières parties du toit manquantes.
Nous avons fixé deux charnières sur le toit afin de pouvoir faire bouger un côté puis coller entièrement l'autre côté car celui-ci doit rester fixe.
Nous avons ensuite collé les deux petits morceaux de plexiglass dans le bas de la serre qui vont servir d'appui pour le haut de la serre.

Notre serre est à présent totalement construite ! On a donc placé tous les capteurs. Nous avons branché les capteurs sur la plaque arduino en essayant de 
ne pas emmeler les fils. Nous avons ajouté une plaque à trous car il nous manquait des 5V et des GND sur la carte arduino. 
En ce qui concerne le servomoteur, nous ne pouvions pas le coller directement sur une paroie. Un professeur nous a donc fourni une pièce qui va entourer
le servo et ainsi nous avons pu le coller sans soucis.

Nous avons également percer le bas de la serre pour laisser passer le tuyau de la pompe.

La partie la plus longue et la plus minutieuse a été de veiller au bon branchement de chaque capteur (ne pas se tromper d'entree analogique par exemple).
Nous avons solidier en soudant ou en scotchant les cables qui avaient tendance à se détacher trop facilement des autres.

Nous avons vérifer que tous les capteurs fonctionnait indépendemment. 

Ensuite il a fallu rassembler tous les bouts de code dans un seul programme. C'est à ce moment que le problème arrive. Nous nous rendons compte que plus rien
ne fonctionne. Après plusieurs tests, nous nous sommes rendues compte que c'était la faute du servomoteur mais aussi des delay. Pour ce qui est des delay 
nous en avons reduit le plus possible. Pour ce qui du servomoteur, la seule solution a été de le brancher sur une autre carte arduino. Cette carte étant elle-
meme reliée à la carte arduino "principale". De fait nous avons du creer un autre petit programme pour faire fonctionner le servomoteur. 

Le programme des leds utilise des fonctions comme la fonction strip. Celle-ci utilise un timer qui agit sur le servomoteur ce qui entraîne tous les bugs. 
Ce timer influe sur toutes les broches de la carte arduino, c'est la raison pour laquelle il a fallu le changer de carte.

Maintenant tout fonctionne, on a donc planter notre menthe et notre serre est terminée !!!
