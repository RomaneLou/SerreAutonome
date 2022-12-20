<h1>Seance 2</h1>
J'ai consacré cette séance à l'étude des leds et du capteur "jour/nuit". 
Premièrement j'ai choisi une couleur que l'on va mettre en journée ("tangerine" 255 127 0). Cela diffuse une lumière assez douce.
Lorsqu'il fait nuit, c'est à ce moment que l'on doit allumer les leds violettes. J'ai choisi ("magenta foncé" 128 0 128).
Pour apporter de l'esthétique au projet, j'ai créé une sorte de coucher de soleil à l'aide de différentes couleurs pour passer de tangerine à 
magenta foncé en plusieurs étapes. Le lever du soleil est donc l'inverse du coucher du soleil. 

Les leds fonctionnent en étant liées au capteur "jour/nuit". 
Pour brancher le capteur c'est plutot simple, il faut connecter la patte A0 du capteur avec celle de l'arduino Uno. Puis le 5V et le GND.
Pour brancher les leds, même chose, c'est assez simple. Il faut connecter le 5V puis le GND et ensuite j'ai choisi la patte 6. 


Dans un premier temps j'ai récupérer deux valeurs en bits, une qui represente la nuit et l'autre le jour. J'obtiens ainsi pour le jour 0 et la nuit 1000. 
Ensuite nous allons convertir nos valeurs en pourcentage. Maintenant ce capteur nous informe sur le pourcentage de jour (il fait jour avec grand soleil : 100%, il fait un peu nuit environ 50%...)

Je peux donc faire fonctionner mes leds en fonction du pourcentage de jour. J'ai choisi deux cas :

Lorsque le pourcentage de jour et inférieur ou égal à 30% : on fait le coucher du soleil puis on laisse les leds violettes jusqu'au jour
Lorsque le pourcentage de jour est supérieur à 30% (je considère qu'il fait jour) : on fait le lever du soleil puis on laisse les leds avec la
couleur tangerine
On repete cette boucle indéfiniment. 

Pour ameliorer l'effet lever et coucher du soleil, je pourrai essayer de "fondre" les couleurs en jouant sur l'intensité des leds quand on change de couleur.
 
Voici le code :


![Code1-leds](https://user-images.githubusercontent.com/119842862/208647313-a53771d1-b27d-4d8c-a156-56b1d0751940.png)
![code2-leds](https://user-images.githubusercontent.com/119842862/208647326-7855e56c-0d44-426b-a388-f8212bb1f152.png)
![code3-leds](https://user-images.githubusercontent.com/119842862/208647341-9b4b2c2f-bb43-4402-9d71-b02522107cef.png)
![code4-leds](https://user-images.githubusercontent.com/119842862/208647350-e2346c90-7602-43ef-83e0-db19ffaca7ee.png)

Voici une photo du montage :


[Photo-montage-leds-capteur.HEIC.zip](https://github.com/RomaneLou/SerreAutonome/files/10267637/Photo-montage-leds-capteur.HEIC.zip)




