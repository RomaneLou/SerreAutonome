
J'ai consacré cette séance à l'étude des leds et du programme. 
Premièrement j'ai choisi une couleur que l'on va mettre en journée ("tangerine" 255 127 0). Cela diffuse une lumière assez douce.
Lorsqu'il fait nuit, c'est à ce moment que l'on doit allumer les leds violettes. J'ai choisi ("magenta foncé" 128 0 128).
Pour apporter de l'esthétique au projet, j'ai créé une sorte de coucher de soleil à l'aide de différentes couleurs pour passer de tangerine à 
magenta foncé en plusieurs étapes. 

Les leds fonctionnent en étant liées au capteur "jour/nuit". 
Pour brancher le capteur c'est plutot simple, il faut connecter la patte A0 du capteur avec celle de l'arduino Uno. Puis le 5V et le GND.
Ensuite je recupere deux valeurs en bits, une qui represente la nuit et l'autre le jour. J'obtiens ainsi pour le jour 0 et la nuit 1000. 
On va ensuite faire un taux donc on on dot convertir nos valeurs en pourcentage. 

Tout d'abord, dans mon programme j'impose la valeur de quand il fait nuit et quand il fait jour pour pouvoir ensuite faire les cas avec les leds. 

