# Introduction

En C, les chaînes de caractères sont des vecteurs de caractères (`char` en anglais) et pour stocker un texte, il faut donc avoir créé un tableau de caractères assez grand pour contenir tout le texte. De plus, toutes les chaînes de caractères en C se terminent forcément, dans la mémoire de l'ordinateur, par le caractère `\0` qui ne s'affichera jamais mais permet de savoir que la chaîne est finie.

Pour pouvoir saisir ou afficher une chaîne de caractères avec un `scanf` ou un `printf`, on utilise le symbole `%s`.

[Video Intro](https://www.youtube.com/watch?v=qqSHpG_UvQw)

Lien : https://www.youtube.com/watch?v=qqSHpG_UvQw

## Fonctions de traitement des chaînes de caractères

Il existe plusieurs fonctions permettant de travailler avec des chaînes de caractères. Vous en trouverez quelques-unes ci-après. (Toutes ces fonctions sont définies dans la librairie standard `string.h`.

### size_t strlen(const char* chaine);

`strlen` est une fonction qui calcule la longueur d'une chaîne de caractères (sans compter le caractère `\0`).

NB : le type `size_t` est définit dans `stdlib.h` et il est utilisé pour contenir une taille d'un objet (un vecteur, ...). Ce type garantit de pouvoir stocker un nombre suffisamment grand pour donner la taille du plus grand objet possible (différent, notamment, en fonction du système 32 bits ou 64 bits).

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[10] = "Bonjour\0";
    int longueurChaine = 0;

    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long", chaine, longueurChaine);

    return 0;
}
```

### char* strcpy(char* destination, const char* source);

La fonction `strcpy` permet de copier une chaîne à l'intérieur d'une autre.

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char chaine[100] = "Texte\0", copie[100];

    strcpy(copie, chaine); // On copie "chaine" dans "copie"

    // Si tout s'est bien passé, la copie devrait être identique à chaine
    printf("chaine vaut : %s\n", chaine);
    printf("copie vaut : %s\n", copie);

    return 0;
}
```

### char* strcat(char* chaine1, const char* chaine2);

La fonction `strcat` ajoute `chaine2` après la `chaine1` et stock le résultat dans chaine1.

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine1[100] = "Salut "; //Sa taille doit être suffisante pour accueillir chaine1 et chaine2
	char chaine2[15] = "Mateo21";

    strcat(chaine1, chaine2);

    // Chaine1 contient la concaténation de chaine1 et chaine2
    printf("chaine1 vaut : %s\n", chaine1);

    // chaine2 n'a pas changé :
    printf("chaine2 vaut toujours : %s\n", chaine2);

    return 0;
}
```

### int strcmp(const char* chaine1, const char* chaine2);

La fonction `strcmp` compare les chaines de caractères `chaine1` et `chaine2`. 
Elle renverra :
- `0` si les chaînes sont identiques 
- une valeur positive si la première est alphabétiquement après la seconde (dans l'ordre définit par le jeu de caractère du compilateur) 
- une valeur négative si la première est alphabétiquement avant la seconde (dans l'ordre définit par le jeu de caractère du compilateur)

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine1[16] = "Texte de test A";
	char chaine2[16] = "Texte de test B";

    if (strcmp(chaine1, chaine2) < 0) { // Si chaîne 1 < chaîne 2 :
        printf("La chaine 1 : '%s' est avant la chaine 2 : '%s'\n", chaine1, chaine2);
    } else if (strcmp(chaine1, chaine2) < 0) { // Si chaîne 1 > chaîne 2 :
        printf("La chaine 2 : '%s' est avant la chaine 1 : '%s'\n", chaine2, chaine1);
	} else { // Si chaînes identiques
        printf("La chaine 1 : '%s' est identique a la chaine 2 : '%s'\n", chaine1, chaine2);
    }
    return 0;
}
```

### char* strchr(const char* chaine, int caractereARechercher);

La fonction `strchr` renvoie un pointeur vers la première occurence du caractère à rechercher qu'elle a trouvé, c'est-à-dire qu'elle renvoie l'adresse de ce caractère dans la mémoire. Elle renvoie `NULL` si elle n'a rien trouvé.

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[15] = "Texte de test";
	char *suiteChaine = NULL;

    suiteChaine = strchr(chaine, 'd');

    if (suiteChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);
    }

    return 0;
}
```


### char* strstr(const char* chaine, const char* chaineARechercher);

La fonction `strstr` recherche la première occurrence d'une chaîne dans une autre chaîne.

Elle renvoie un pointeur, sur la première occurrence, quand elle a trouvé ce qu'elle cherchait. Elle renvoie NULL si elle n'a rien trouvé.

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[15] = "Texte de test";
    char *suiteChaine=NULL;

    printf("Adresse de suite de chaîne : %p\n",suiteChaine);

    // On cherche la première occurrence de "test" dans "Texte de test" :
    suiteChaine = strstr(chaine, "test");

    if (suiteChaine != NULL)
    {
        printf("Premiere occurrence de \"test\" dans \"Texte de test\" : %s\n", suiteChaine);
    }

    printf("Adresse de suite de chaîne : %p\n",suiteChaine);
    printf("Adresse de suite de chaîne : %p\n",suiteChaine-chaine); //Pourra constater que l'indice du début de test est bien 9
    return 0;
}
```

## Quizz

Afin de tester votre compréhension de la matière, complèter [ce questionnaire](https://goo.gl/forms/Kc5ByfHXXgewi9OV2)