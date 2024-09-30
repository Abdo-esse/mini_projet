#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    char titre[1000];
    char auteur[100];
    float prix [100];
    float quantite[1000];
    int i,nombre;


    printf("Veuillez entrer le nombrer des livres que vous souhaitez stockees: ");
    scanf("%d",&nombre);

    printf("Entrer les titres des livres (sans espace):\n");

    for(i=0;i<nombre;i++){
        printf("- Titre du livre [%d] : ",i);
        scanf("%s",&titre[i]);
    }
    printf("Entrer les auteurs des livres(sans espace) :\n");

    for( i=0;i<nombre;i++){
        printf("- Auteur du livre [%d] : ",i);
        scanf("%s",&auteur[i]);
    }
     printf("Entrer les prix des livres :\n");

    for(i=0;i<nombre;i++){
        printf("- Prix du livre [%d] : ",i);
        scanf("%f",&prix[i]);
    }
    printf("Entrer la quantite en stock  :\n");

    for(i=0;i<nombre;i++){
        printf("- Quantite en stock [%d] : ",i);
        scanf("%f",&quantite[i]);
    }










    return 0;
}

