# Exercice 3

Ecrire un programme qui permet de supprimer une à une toutes les lettres d'un mot (chaîne de caractères).

Soyez attentifs à la découpe du programme en fonctions !

NB: on prendra soin d'utiliser `gets_s()` pour saisir correctement du texte ! Exemple :
```c
int main()
{
    char str[100] = "\0", ch[2] = "\0";

    printf("Entrez un mot : ");
    gets_s(str);

    printf("Entrez une lettre : ");
    gets_s(ch);

    printf("Le mot : %s\n"
           "la lettre : %c.", str, ch[0]);
    return 0;
}
```
qui donne :
```
Entrez un mot : bonjour
Entrez une lettre : b
Le mot : bonjour
la lettre : b.
```

## Exemple
```
Entrez un mot : bonjour
Quelle lettre voulez-vous retirer ? b
Le mot restant est : onjour, il lui reste 6 lettre(s).
Quelle lettre voulez-vous retirer ? n
Le mot restant est : ojour, il lui reste 5 lettre(s).
Quelle lettre voulez-vous retirer ? t
Le mot restant est : ojour, il lui reste 5 lettre(s).
Quelle lettre voulez-vous retirer ? r
Le mot restant est : ojou, il lui reste 4 lettre(s).
Quelle lettre voulez-vous retirer ? o
Le mot restant est : ju, il lui reste 2 lettre(s).
Quelle lettre voulez-vous retirer ? u
Le mot restant est : j, il lui reste 1 lettre(s).
Quelle lettre voulez-vous retirer ? j
Il ne reste plus aucune lettre dans votre mot !
```