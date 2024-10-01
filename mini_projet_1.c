#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char titre [100][100];
    char auteur [100][100];
    float prix [100];
    float quantite [100];
    int choix,i,nbr;
    char titreMA[100];
    float quantiteMA;
    char titreS[100];
    int total=0;




    do{
        printf("\n\t Systeme de Gestion de Stock dans une Librairie  \n\n");
        printf("1-Ajouter un livre au stock. \n");
        printf("2-Afficher tous les livres disponibles.\n");
        printf("3-Mettre a jour la quantité d'un livre.\n");
        printf("4-Supprimer un livre du stock.\n");
        printf("5-Afficher le nombre total de livres en stock.\n");
        printf("6-Quiter.\n");
        printf("Entrer votre choix:");
        scanf("%d",&choix);
        switch (choix){
        case 1:
            printf("Veuillez entrer la nombre des livre :"),
            scanf("%d",&nbr);

            for(i=0;i<nbr;i++){
            printf("\t Entrer les les information du livre(%d):\n",i+1);
            printf("Titre du livre:");
            scanf("%s",titre[i]);
            printf("Auteur du livre:");
            scanf("%s",auteur[i]);
            printf("Prix du livre:");
            scanf("%f",&prix[i]);
            printf("Quantite du livre:");
            scanf("%f",&quantite[i]);
            }

            break;
        case 2:
            if (nbr == 0){
                    printf("Aucun livre disponible dans le stock.\n");
            }
            else{
                printf("\t les livre qui ajoute sont:\n");
             for(i=0;i<nbr;i++){
            printf("\t\t Livre(%d):\n\n",i+1);
            printf("Titre du livre:%s",titre[i] );
            printf("\t Auteur du livre:%s \n\n",auteur[i]);
            printf("Prix du livre:%.2f",prix[i]);
            printf("\t Quantite du livre:%.f \n",quantite[i]);
            }
            }
            break;
        case 3:
            printf("Entrer le titre du livre qui vous modiffier: ");
            scanf("%s",titreMA);
            int trouve1=0;
            for(i=0;i<nbr;i++){
                 if (strcmp(titre[i],titreMA)==0){
                    printf("La quantite dernier du %s est : %.2f",titreMA,quantite);
                    printf("Entrer la nouvelle quantiter:");
                    scanf("%f",&quantiteMA);
                    quantite[i]=quantiteMA;
                    trouve1=1;
                    break;
                }
            }
            if (!trouve1)
                printf("%s n'existe pas.",titreMA);
                break;
        case 4:
            printf("Entrer le titre du livre qui vous supremer: ");
            scanf("%s",titreS);
            int trouve2=0;
            for(i=0;i<nbr;i++){
               if (strcmp(titre[i],titreS)==0){
                   trouve2=1;
                  for(int j=0;j<nbr-1;j++){
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j+1];
                        quantite[j] = quantite[j + 1];
                        }
                  titre[nbr - 1][0] = '\0';
                  auteur[nbr - 1][0] = '\0'; // Vide le titre
                  prix[nbr-1]=0;
                  quantite[nbr - 1] = 0; // Met à 0 la quantité
                  nbr--; // Réduit le nombre total de livres
                  printf("Le livre '%s' a ete supprime.\n", titreS);
               break;
                }
            }
            if (!trouve2)
                printf("%s n'existe pas.",titreS);
                break;
        case 5:
             for(i=0;i<nbr;i++){
                total=total+quantite[i];
                }
                printf("Le nombre total de livres en stock est %d livres",total);
             break;

        case 6:
              printf("Good by");
              break;
        default:
               printf("Erreur,veuillez entrer entrer 1 et 6");

            }
    }while(choix!=6);

    return 0;
}
