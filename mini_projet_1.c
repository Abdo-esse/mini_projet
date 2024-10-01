#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{


        char titre[100][100];
        char auteur [100][100];
        float prix[100];
        float quantite[100];
        int nbr;
        char titreAMA[100];
         int nquantite;
         char titreAS ;
        int choix;
        int t=0;
        int x=0;


         debut:
        do{
                printf("\t Menu \n");
                printf("1-Ajouter un livre . \n");
                printf("2-Les livre disponible. \n");
                printf("3-Modiffier la quantite du livre.  \n");
                printf("4-Supprimer un livre du stock.\n")
                printf("5-Quiter.\n");
                printf("Entrer votre choix : ");
                scanf("%d",&choix);
                 getchar();

     switch (choix){
                  case 1:
                      printf("veuillez enter taill: ");
                      scanf("%d",&nbr);

                for(int i=0;i<nbr;i++){

                    printf("\t veuillez enter les information suivante du livre : %d\n",i+1);

                    printf("Le titre de livre :");
                    scanf("%s",titre[i]);

                    printf("L'auteur de livre :");
                    scanf("%s",auteur[i]);

                    printf("Le prix de livre :");
                    scanf("%f",&prix);

                    printf("La quantite de livre :");
                    scanf("%f",&quantite);



                    }

                break;

                  case 2:


                 if (nbr ==0){

                     printf("Aucan liver disponible");
                 }
                 else {

                    for(int i=0;i<nbr;i++){

                         printf("\t Livre %d\n",i+1);

                         printf("Titre : %s\n",titre[i]);

                         printf("L'auteur :s\n",auteur[i]);

                         printf("Prix : %.2f\n",prix[i]);

                         printf("Quantite : %.f\n\n",quantite[i]);

                         }
                 }
                          break;

                  case 3:
                printf("Entrer le titre du livre peut modiffier : ");
                scanf("%s", titreAMA);
                for (int i = 0; i < nbr; i++) {
                    if (strcmp(titre[i],titreAMA) == 0) {
                        printf("La dernier stock : %d \n",&quantite);
                        printf(" entrer le nouveau stock : ");
                        scanf("%d", &nquantite);
                        quantite[i] = nquantite;
                        t= 1;
                        break;
                    }
                }
                if (!t) {
                    printf("not found\n");
                }
                break;
                   case 4:
                        printf("Entrer le titre du livre peut suprimer : ");
                        scanf("%s", titreAS);
                        for (int i = 0; i < nbr; i++) {
                            if (strcmp(titre[i],titreAS) == 0) {

                      break;
                case 5:
                    printf("Good by");
                      break;

            default:

                 printf("Choix invalide. Veuillez reessayer.\n");
     }
    }while (choix !=4);
    return 0;
}


