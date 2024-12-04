# Exercice 2

Le palindrome (substantif masculin), du grec πάλιν / pálin (« en arrière ») et δρόμος / drómos (« chemin, voie »), aussi appelé palindrome de lettres, est une figure de style désignant un texte ou un mot dont l'ordre des lettres reste le même qu'on le lise de gauche à droite ou de droite à gauche, comme dans la phrase « Ésope reste ici et se repose » ou encore « La mariée ira mal » à un accent près. 
(définition Wikipedia)

A) Il faut écrire la fonction `palindrome` qui renvoie `1` si la chaine de caractère passée en argument est un palindrome et `0` sinon.

On pourra considérer qu'une chaine vide est un palindrome, de même qu'un caractère seul.

On ne devra pas se soucier des accents, pour cet exercice ! (l'utilisateur écrira : « **E**sope reste ici et se repose » ou encore « La mari**e**e ira mal » )

ATTENTION! La fonction ne doit pas être sensible à la casse. La librairie `ctype.h` offre les fonctions `tolower` et `toupper` convertissant 1 caractère en minuscule ou majuscule. 

La librairie est déjà incluse pas besoin de l'ajouter. [Référence `ctype.h`](http://www.cplusplus.com/reference/cctype/).

@[palindrome]({"stubs": ["palindrome.h"],"command": "sh /project/target/run.sh test_palindrome","project": "palindrome"})

B) Idem mais dans cette fonction :

@[palindrome2]({"stubs": ["palindrome.h"],"command": "sh /project/target/run.sh test_palindrome","project": "palindrome2"})
