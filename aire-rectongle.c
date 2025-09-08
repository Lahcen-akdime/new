#include <stdio.h>
#include <stdlib.h>

typedef struct  {
float langueur ;
float largeur ;
}Rectongle ;
int main (){
    Rectongle n1[50];
    printf("entrer le langeur ici : ");
    scanf("%f",&n1[0].langueur);
    printf("\n entrer le largeur ici : ");
    scanf("%f",&n1[0].largeur);
    float aire = n1[0].langueur * n1[0].largeur ;
    printf("\n voici laire de rectongle : %.2f",aire);
return 0;
}