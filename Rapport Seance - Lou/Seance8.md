Cette séance était la dernière séance. Il a donc été question de finir entièrement notre projet. 

Lors de la dernière séance nous avions fixé les charnières au plexiglass avec de la colle mais elles se sont décolées. Donc nous avons décidé de visser 
les charnières. 
Nous avons donc pu coller le toit, un coté du toit est immobile donc nous l'ons collé avec la colle à plexiglass et l'autre partie, qui bouge, est vissée 
aux charnières.
Ensuite, nous avons fixer les deux calles à l'intérieur de la serre qui permettrons de venir déposer la partie haute avec les murs et le toit.


Maintenant que la construction de la serre est finie, nous avons commencé à placer les capteurs et les autres éléments et composants. C'est un travail que 
nous avons fait ensemble car nous devions être d'accord toutes les deux.
En créant le toit nous avons pensé à laisser un petit trou afin d'y faire paser tous les fils qui sortent de l'intérieur de la serre vers la carte arduino
et la plaque à trous. 
Le capteur d'humidité de l'air à été collé sur le haut d'un mur et branché correctement sur la carte arduino et la plaque à trous.
La plaque à trous nous a permis de faire une ligne de GND et une ligne 5V car nous n'avions pas la place de tout connecter sur la carrte arduino.
Le capteur d'humidité du sol a été déposé sur le fond de la serre.
Nous avons ensuite réfléchi à la façon dont nous allions poser le servomoteur. Nous l'avons collé sur un mur de facon à ce qu'il puisse lever la partie du
toit en se levant. Pour le coller, un professeur nous a fourni un boitier pour éviter de mettre de la colle directement sur le servomoteur.
Pour finir les placements, on a mis la pompe à eau et un petit réservoir dans le compartiment dédié.

Lors de ces branchements il a fallu faire attention à attribuer la bonne entrée analogique de chaque composant sur la carte arduino ainsi que dans le programme.
Nous avons vérifié alors que tout fonctionnait indépendemment. Romane a vérifié le fonctionnement du servomoteur et des leds tandis que j'ai vérifié celui
de la pompe à eau.

La dernière étape (avant de planter notre menthe) a été de mettre tout sur un seul programme. 
C'est ici que nous avons rencontré le plus de difficulté. En effet lorsque nous avons tout assemblé, on a remarqué que ça ne marchait pas correctement.
Déjà les actions étaient très lentes à se produire. Nous avons donc compris que c'était à cause de tout les "delay" que nous avions mis.
Nous avons donc réduis certains temps. (Cela reste quelques fois assez long mais ce n'est pas un gros problème car c'est une serre donc les actions peuvent 
être faites un peu plus lentement).

Le plus gros problème était que le servomoteur tremblait lorsqu'une action était réalisée.
On a donc cherché a comprendre d'où venait ce problème.
Nous avons donc transformé notre code en faisant 3 méthodes (une pour chaque action: humdité air, humidité sol et luminosité)
Nous avons ensuite testé les différents cas afin de savoir qu'est ce qui ne fonctionnait pas bien ensemble. 
L'humidité du sol(avec la pompe) et la luminosité (leds) fonctionnaient correctement ensemble. 
L'humidité du sol et l'humidité de l'air (servomoteur) fonctionnaient également.
Cependant nous avons remarqué que la luminosité et l'humidité de l'air avait des bugs: lorsque les leds changeaint, le servomoteur se mettait à trembler. Il ne respectait pas les consignes qu'on lui avait donné dans le code.
Il a fallu donc essayer de comprendre comment régler ce problème. 
On a eu l'aide de professeurs et nous avons compris qu'une certaine fonction présente dans le code des du capteur de lumière n'était pas comptaible avec le servomoteur. C'est la fonction "strip". Nous avons donc cherché dans la documentation et essayé de changer des choses dans le branchement et dans le code mais cela n'a pas fonctionner.

La seule solution a été de séparer le servomoteur et les leds. Nous avons donc été obligé d'utiliser une autre carte arduino. Celle-ci contient juste le branchement du servomoteur. 
Ainsi il a été nécessaire de faire une deuxième page de code qui sert à mettre le servomoteur en route.

Dans le code principal on indique simplement dans la méthode du capteur de l'humidité de l'air que si notre pourcentage est trop haut alors dans ce cas on
allume le pin 10. Le pin 10 est relié au pin 10 de la deuxième carte arduino. 


Le problème étant réglé nous avons pu planter notre menthe.
Notre projet est fini et il fonctionne. 

