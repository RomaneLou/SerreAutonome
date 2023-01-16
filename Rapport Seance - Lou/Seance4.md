Lors de cette séance nous avons pu lancer la construction 3D de la partie basse de notre serre. Pour cela on a mis la modélisation réalisée lors de la 
dernière séance sur une clée USB exportée en format STL. On a pu ainsi fournir notre projet et nos attentes (la couleur et le matériel) à notre 
professeur qui pourra nous l'imprimer afin que nous l'ayons pour la semaine prochaine (en effet l'impression dure plus de 14h).

Ensuite, nous avons préféré finaliser le fonctionnement de nos capteurs.
Pendant que Romane étudiait le servo moteur j'ai essayé de relier la pompe au capteur d'humidité.
En effet lors d'une séance précédente j'avais assuré le fonctionnement de la pompe après avoir compris comment elle fonctionnait et comment j'allais la 
brancher. 
Ainsi j'ai récupérer le montage de mon capteur d'humidité et celui de la pompe et je les ai reliés.
J'ai relié la broche A0 du capteur à la broche AO de la carte arduino (et bien sur j'ai relié le GND)
j'ai relié la pompe à eau sur la broche 13.

Voici une photo de mon montage:https://user-images.githubusercontent.com/119842862/212730631-0b5b7750-2fd2-4273-be43-73ff28a32b8d.png


Je me suis ensuite concentrée sur le programme. 
Après avoir récupérer le programme du capteur d'humidité, j'ai initiliasé le Pin de la pompe, c'est à dire la broche sur laquelle la pompe est relié.
En fait il s'agit du pin du relais car c'est le relai qui est directement branché à la broche. 

A l'aide d'un if j'ai fais en sorte que si le pourcentage d'humidité est inférieur à 40% la pompe se met en marche. Elle reste allumée pendant 6 secondes 
afin d'arroser correctement et ne pas noyer la plante. 
Le capteur attends ensuite 1min avant d'effectuer une nouvelle mesure. 

voici une photo du code: https://user-images.githubusercontent.com/119842862/212730392-ee74781f-2d85-42de-ac39-239032b9abb5.png


Pour la prochaine séance je m'interresserais à la fabrication du haut de la serre.
