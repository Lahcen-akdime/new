// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   char titres [10][10] = {0};
   char auteurs [10][10] = {0};
   int prix [10] = {0};
   int quantites [100] = {0};
   int choix , ch2 ;
   int h = 0 ;
    int n = 0 ;
    int i = 0;

   back: printf("\n \n");

   printf("bienvenus sur votre libiraire \n");
     printf(" s'il vous plait choisis votre demande .\n1. tu veux Ajouter un livre au stock \n 2. tu voux Afficher tous les livres disponibles  \n 3. tu vous Rechercher un livre par son titre  \n 4. tu veux Mettre a jour la quantite d'un livre \n 5. tu veus Supprimer un livre du stock  \n 6. tu veux Afficher le nombre total de livres en stock \n ton choix : ");
    scanf("%d",&choix) ;
    switch (choix){
        case 1: 
            for(i;i<10;i++){
                printf("bienvenue sur la fenetre d'ajouter les livres au librairie \n  \n pour ajouter les livres essayer dentrer les elements suivante : \n le titre de livre : ");
                scanf("%s",&titres[i]);
                printf("\n auteur de livre : ");
                scanf("%s",&auteurs[i]);
                printf("\n le prix que vous voulez (dh) : ");
                scanf("%d",&prix[i]);
                printf("\n la quantite que vous avez : ");
                scanf("%d",&quantites[i]);
                printf("votre demande est valide avec succee \n");
                i++;
                goto back ; 
            
        }
         case 2 : 
         for (int n =0;n<i;n++)
         {
             printf("\n le livre : %s ",titres[n]);
             printf(" \n auteur : %s \n prix : %d \n quantite : %d",auteurs[n],prix[n],quantites[n]);
             goto back ;
         }

}

return 0 ;
}