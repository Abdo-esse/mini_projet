#include <stdio.h>
#include <stdlib.h>


int main()
{


    char titre[100];
    char auteur[100];
    float prix [100];
    float quantite[100];
    char titre2[100];
    int i,nombre , book_count;


    printf("Veuillez entrer le nombrer des livres que vous souhaitez stockees: ");
    scanf("%d",&nombre);

    printf("Entrer les titres des livres (sans espace):\n");

    for(i=0;i<nombre;i++){
        printf("- Titre du livre [%d] : ",i+1);
        scanf("%s",&titre[i]);
         printf("- Auteur du livre [%d] : ",i+1);
        scanf("%s",&auteur[i]);
        printf("- Prix du livre [%d] : ",i+1);
        scanf("%f",&prix[i]);
        printf("- Quantite en stock [%d] : ",i+1);
        scanf("%f",&quantite[i]);
    }
    printf("les Livres Disponibles : \N");
    printf("============================================\n");

    for(i=0;i<nombre;i++){

        printf("- Titre du livre [%d] :%s \n",i+1,titre);

        printf("- Auteur du livre [%d] :%s \n",i+1,auteur);

        printf("- Prix du livre [%d] :%d \n",i+1,prix);

        printf("- Quantite en stock [%d] :%d \n",i+1,quantite);

        printf("============================================\n");
    }
    printf("veuillez entrer lr titre dutableae : ");
    scanf("%s",&titre2);


        if (strstr(titre,titre2) !='\0'){
            printf("existre");
        }










    return 0;
}

