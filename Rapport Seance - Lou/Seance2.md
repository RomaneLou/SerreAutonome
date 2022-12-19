

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







ohmetre
relai






