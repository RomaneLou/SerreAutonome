

Lors de cette séance j'ai étudier le capteur d'humidité.

Ce capteur mesure donc l'humidité de la terre. Il sera placé au fond de notre serre.
Il récupère une valeur en bit, comprise entre 0 et 1023. Il faudra donc ensuite créer un taux donc on convertit nos valeurs en pourcentages. 
Le pourcentage le plus important correspondra à l'humidité maximale tandis que le pourcentage le plus bas correspondra à l'humidité miniamale soit un environnement sec.


J'ai d'abord compris comment le brancher à ma carte arduino. Notre capteur d'humidité est en deux parties.
Le branchement est simple il suffit d'abord de relier les deux parties du capteur. 
On le branche ensuite à la carte arduino, on relie la patte A0 de la carte UNO et la patte A0 du capteur. On relie la masse et le 5V.

Voici une photo du montage 

Concernant le code, il faut d'abord définir les variables, le pin où le capteur est branché pour éviter de devoir le modifier par la suite, la valeur de l'humidité ainsi que le pourcentage.
On récupère la valeur reçue par le capteur grâce à un AnalogRead. 
Pour définir le pourcentage j'ai du effectuer des mesures avec mon capteur. J'ai d'abord noté la valeur obtenue lorsque nous nous trouvons dans un environnement sec puis au contraire lorsque le capteur est plongé dans l'eau. J'ai mis ces deux valeurs repères dans des variables.
Et grâce à la méthode map() (sur laquelle je me suis renseignée avec la documentation) j'ai pu créer un pourcentage.

Voici le code 



Mesures pour connaître le capteur d'humidité:
air libre (sec) : 1023
pointes du capteur (sans toucher l'électrode) : 1023 (cela ne diminue pas)
bout de l'électrode : 515
première barre de l'électrode: 375
deuxième barre de l'électrode : 350
troisième barre de l'électrode : 320
quatrième barre de l'électrode : 300
cinquième barre de l'électrode : 278
sixième barre de l'électrode: 266
le capteur en entier 259



J'ai ensuite travailler sur la pompe à eau qui devra se déclencher lorsque l'humidité est trop faible. Elle sera relier à un reservoir qui contient l'eau.
La pompe à eau est constitué d'un moteur. Ce moteur nécessite une puissance d'alimentation importante et le 5v n'étant pas suffisant j'ai ajouté une alimentation extérieure de 12V. Le moteur est relié à un relai qui travaille sur les résistances. Le relai est ensuite relié à la carte arduino.
Voici un schéma qui résume le branchement que j'ai réaliser: 


Le relai possède trois branches et est en fait un interrupteur. Mon travail a donc été de déterminer ces broches. Il fallait trouver le C (le C est connecté au moteur), le Normalement Ouvert (NO) et le Normalement Fermé (NF). Pour cela j'ai utilisé un ohmmètre.
Voici la démarche: 
Je teste d'abord les deux broches de gauche en les connnectant sur le ohmmètre. La résistance est mesurée. Cela signifie qu'il y a une broche C et soit une NO soit une NF.
https://user-images.githubusercontent.com/119842862/208511207-00ae5492-46e1-408b-8d65-51f76e2ccfe6.jpg 

Je fais pareil pour les deux broches à droite. Je remarque qu'une résistance est mesurée. Donc de même il y a une broche C et une broche NO ou NF. 
On peut en déduire que la broche du milieu est C.
https://user-images.githubusercontent.com/119842862/208512309-1295c25c-01fb-430d-af1f-2270bac2b711.jpg

Pour confirmer mon résultat en reliant les deux broches extérieures je remarque que rien ne s'affiche sur le ohmmètre. Ainsi ces deux broches sont le NO et le NF.
https://user-images.githubusercontent.com/119842862/208512649-c86ea643-856a-4245-be92-08176c1beaeb.jpg












