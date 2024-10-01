#include <stdlib.h>
#include <stdio.h>
#include<string.h>



int main(){

    char titre[100][100];
    char auteur [100][100];
    float prix [1000];
    float quantite[100];
    int nbr=0;


    int c;


    do{
        printf("\t Menu\n");
        printf("===============================\n");
        printf("1-Ajouter un livre.\n");
        printf("2-Aficher tous livres disponibles.\n ");
        printf("3-Modifier la quantite d'un livre.\n");
        printf("4-Quitter.\n");
        printf("Entrer votre choix : ");
        scanf("%d",&c);
        getchar();

        if(c == 1){
            if (nbr<100){
                printf("Titre du livre:");
                fgets(titre[nbr], 100, stdin);
                titre[nbr][strcspn(titre[nbr], "\n")] = '\0';
                printf("Auteur du livre:");
                fgets(auteur[nbr],100,stdin);
                auteur[nbr][strcspn(auteur[nbr], "\n")] ='\0';
                printf("Prix du livre: ");
                scanf("%f",&prix[nbr]);
                printf("Quantite du livre: ");
                scanf("%f",&quantite[nbr]);
                 getchar();
                 nbr++;
                }
            else
                ("le stocke est plien");
        }
        else if(c == 2){
                if (nbr == 0){
                    printf("Aucun livre disponible dans le stock.\n");
                }
                 else{
                    for(int i=0;i<nbr;i++){
                       printf("Livre %d\n",i+1);
                       printf("Titre: %s\n",titre[i]);
                       printf("Auteur:%s\n",auteur[i]);
                       printf("Prix:%.2f \n",prix[i]);
                       printf("Quantite:%.f \n",quantite[i]);
              }
        }
        }

        else if(c == 3){
                printf("Pas encore ajoute\n");

        }
         else if(c == 4){
                printf("Good by");
         }

        else
            ("Erreur,veuillez réessayer\n");
    } while (c != 4);

    return 0;
}