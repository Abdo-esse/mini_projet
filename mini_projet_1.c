#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{


        char titre[100][100];
        char auteur [100][100];
        float prix[100];
        int quantite[100];
        int nbr=0;
        int choix;



        do{
                printf("\t Menu \n");
                printf("1-Ajouter un livre . \n");
                printf("2-Les livre disponible. \n");
                printf("3-Modiffier la quantite du livre.  \n");
                printf("4-Quiter\n");
                printf("Entrer votre choix : ");
                scanf("%d",&choix);
                 getchar();


            if( choix == 1){

                if(nbr <100){

                    printf("\t veuillez enter les information suivante\n");

                    printf("Le titre de livre :");
                    fgets(titre[nbr],100,stdin);
                    titre[nbr][strcspn(titre[nbr],"\n")]='\0';

                    printf("L'auteur de livre :");
                    fgets(auteur[nbr],100,stdin);
                    auteur[nbr][strcspn(auteur[nbr],"\n")]='\0';

                    printf("Le prix de livre :");
                    scanf("%f",&prix);

                    printf("La quantite de livre :");
                    scanf("%d",&quantite);
                    getchar();

                    nbr++;
                    }

                else{

                printf("Stockage est plien.");

                }
                }

            else if ( choix == 2){


                 if (nbr ==0){

                     printf("Aucan liver disponible");
                 }
                 else {

                    for(int i=0;i<nbr;i++){

                         printf("\t Livre %d\n",i+1);

                         printf("Titre : %s\n",titre[i]);

                         printf("L'auteur :s\n",auteur[i]);

                         printf("Prix : %.2f\n",prix[i]);

                         printf("Quantite : %d\n\n",quantite[i]);

                         }
                 }
            }

            else if( choix == 3){

                    printf("rrrrrrrrrr");

            }

            else if (choix ==4){

                    printf("Good by");

            }

            else{

                 printf("Choix invalide. Veuillez reessayer.\n");
            }







    }while (choix !=4);











    return 0;
}


