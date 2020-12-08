# Exercice 2

Il faut écrire la fonction `palindrome` qui renvoie `1` si la chaine de caractère passée en argument est un palindrome et `0` sinon.

On pourra considérer qu'une chaine vide est un palindrome, de même qu'un caractère seul.

ATTENTION! La fonction ne doit pas être sensible à la casse. La librairie `ctype.h` offre les fonctions `tolower` et `toupper` convertissant 1 caractère en minuscule ou majuscule. 

La librairie est déjà incluse pas besoin de l'ajouter. [Référence `ctype.h`](http://www.cplusplus.com/reference/cctype/).

@[palindrome]({"stubs": ["palindrome.h"],"command": "sh /project/target/run.sh test_palindrome","project": "palindrome"})