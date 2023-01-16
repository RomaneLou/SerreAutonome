Nous avons commencé cette séance en discutant avec les professeurs pour nous guider dans la construction de la serre. Nous avons alors décidé que le 
bas de notre serre (là où il y aura la terre) sera en plastique. Il sera réalisé grâce à l'imprimante 3D. Pour ce qui concerne le haut, nous allons utiliser du plexiglas. Je me suis alors chargée de faire un plan plus détaillé de la serre avec les mesures pour que Lou puisse modeliser le bas sur le site Onshape. Pour ces constructions, il faut utiliser des sites en ligne. 

Voici une photo du plan 

69506351524__75F28A78-2573-45A1-B89E-A280C3D17013

Les dernières séances nous avons étudié les capteurs. Cependant, il nous restait le capteur de l'humidité de l'air à analyser. J'ai commencé par comprendre
comment il se branche sur l'arduino UNO. Cela s'avère assez simple : on connecte le 5V et GND puis la broche DAT du composant se connecte à la patte 6 de la carte. J'ai ensuite réalisé le programme pour récupérer une valeur en pourcentage de l'hygométrie. 

Voici le programme :

![Capture d’écran 2023-01-10 à 19 03 10](https://user-images.githubusercontent.com/119842862/211627914-5196ae56-daba-4c6c-9bcf-93d51c0057d8.png)


Maintenant que nous avons des informations sur l'hygrométrie, il faut pouvoir agir en conséquences. Lorsque le pourcentage d'hygrométrie sera trop élevé, nous avons décidé d'ouvrir une partie du toit à l'aide du servo moteur. Ce servo moteur est composé de trois fils, le plus foncé est le GND, le rouge
correspond au 5V et le jaune es dédié l'endroit où on envoie les commandes. 
Le servo moteur sera placé sur le coté de la serre (du côté où il y aura la boite avec l'electronique). Il possède une "hélice" qui tourne de 180°. 
Plus on le place haut dans la serre, plus le toit s'ouvrira. 
Le but de la prochaine est de relier le cerveau moteur au capteur d'humidité. 
