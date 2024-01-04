#include <stdio.h>
#define VRAI 1
#define FAUX 0

int Verif(int l, int c); /* fonction qui verifie si le nombre de colonnes et lignes est valide (c'est à dire entre 3 et 7)*/



int main()
{
char joueur1, joueur2; /* variable des pseudos */
int lignes, colonnes; /* variable des lignes et colonnes */
int n; /* variable pour le nombre de jetons */

/* on demande le pseudo des joueurs :*/    
    printf("Saisir le pseudo du joueur 1:\n"); 
    scanf("%s", &joueur1);
    getchar();
    printf("Saisir le pseudo du joueur 2:\n");
    scanf("%s", &joueur2);
    printf("%svs%s\n", joueur1, joueur2);

/* on demande le nombre de lignes et de colonnes tant qu'on a pas des nombres valides :*/ 
    do
    {
        printf("Saisir dans cet ordre le nombre de lignes et de colonnes (entre 3 et 7)\n");
        scanf("%i%i", &lignes, &colonnes);
    } while (!Verif(lignes, colonnes));
    printf("Nombre de lignes = %i, nombre de colonnes = %i \n", lignes, colonnes);
    n = (lignes * colonnes - 1)/2;

}





int Verif(int l, int c) /* ils doivent etre impaires aussi donc faut l'ajouter*/
{
    int lok,cok;
    lok = (l >= 3) && (l<= 7);
    cok = (c >= 3) && (c <= 7);

    return (lok && cok);
}