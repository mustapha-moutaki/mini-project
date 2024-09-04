#include<stdio.h>
#include<string.h>
struct livre{
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
};

int main(){
int choix, nLivre = 0;
char nameAuteur[50];
char nomlivre[50];
livre N[40];
int Majour;
int reponse;
MENU:
do{
    //1, 2, 6==>done
printf("\
------------------LE MENU:------------------------------\n \
1- Ajouter un liver\n \
2- Afficher tous les livres disponibles\n \
3- Rechercher un livre par son titre.\n \
4- Mettre a jour la quantite d'un livre.\n \
5- Supprimer un livre du stock.\n \
6- Afficher le nombre total de livres en stock.\n");
printf("-----------choisir un nombre--------------------\n");
scanf("%d", &choix);

                switch (choix){
                case 1:{
                    printf("\ncombien de livre tu choisie:\n");
                    scanf("%d", &nLivre);
                    for (int i = 0; i < nLivre; i++){
                        printf("----------------------\n");
                        printf("le livre N%d: \n", i+1);
                        printf("le titre: \t");
                        scanf(" %[^\n]s", N[i].titre);
                        printf("l'auteur: \t");
                        scanf(" %[^\n]s", N[i].auteur);
                        printf("le prix: \t");
                        scanf("%f", &N[i].prix);
                        printf("la quantite: \t");
                        scanf("%d", &N[i].quantite);
                    };
                    
                }
                    break;
                    case 2:{
                        printf("\n----------------------\n");
                        printf("==>tous les livres disponibles:\n");
                        for (int i = 0; i < nLivre; i++){
                        printf("----------------------\n");
                        
                        
                        printf("le titre: %s\n", N[i].titre);
                        printf("le auteur: %s\n", N[i].auteur);
                        printf("le prix:  %.2f DH\n", N[i].prix);
                        printf("le quantitr:  %d\n", N[i].quantite);
                        printf("\n----------------------\n");
                        };
                        
                        
                    }
                    break;
//
//int Majour = *N[].quantite;
//
                    case 3:{
                        printf("----------------------\n");
                        printf("==>Rechercher un livre:\n");
                        printf("\n----------------------\n");
                        printf("entrer l'auteur: \t");
                        scanf(" %[^\n]s", &nameAuteur);
                        //int result = strcmp(N[40].titre, nameAuteur);
                        for (int i = 0; i < nLivre; i++)
                        {
                            if (strcmp(nameAuteur, N[i].auteur) == 0)/*result == 0*/{
                            printf("--------------------------\n");
                            printf(" |le titre \" %s \" -le prix: %.2f DH\n", N[i].titre, N[i].prix);
                            printf("--------------------------\n");
                            break;
                        }
                        
                        
                        
                    };
                    }
                    break;

                    case 4:{
                        printf("----------------------\n");
                        printf("==>mettre a jour la quantite de livre:\n");
                        printf("\n----------------------\n");
                        printf("entrer l'auteur: \t");
                        scanf(" %[^\n]s", &nameAuteur);
                        //int result = strcmp(N[40].titre, nameAuteur);
                        for (int i = 0; i < nLivre; i++)
                        {
                            if (strcmp(nameAuteur, N[i].auteur) == 0)/*result == 0*/{
                            printf("--------------------------\n");
                            printf("modifier la quantite:\t");
                            scanf("%d", &Majour);
                            N[i].quantite = Majour;
                            break;
                        }
                    };
                    }
                    break;
                    case 5:{
                        printf("----------------------\n");
                        printf("==>supremer un livre:\n");
                        printf("\n----------------------\n");
                        printf("entrer le nom de livre: \t");
                        scanf(" %[^\n]s", &nomlivre);
                        //int result = strcmp(N[40].titre, nameAuteur);
                        for (int i = 0; i < nLivre; i++)
                        {
                            if (strcmp(nomlivre, N[i].titre) == 0)/*result == 0*/{
                            printf("--------------------------\n");
                            printf(" |le titre \" %s \" -le prix: %.2f DH\n", N[i].titre, N[i].prix);
                            printf(" (1)supremer\n (2)exit");
                            scanf("%d", &reponse);
                            if (reponse == 1){

                                        //*N[] = false;
                                        //here is the probleme
                                
                                int i = *N[i].titre;
                                for ( int j = *N[i].titre; j < nLivre -  1; j++){
                                N[i] = N[i+1];
                                j = j++;
                            
                            }
                            nLivre--;
                            
                            }
                            else if (reponse == 2){
                                goto MENU;
                            }
                            else
                            printf("Oops!!");
                            
                            
                    };
                        
                        }
                    }
                    break;
                    case 6:{
                        printf("-----------------------\n");
                        printf("\n==>Mettre a jour la quantite d'un livre: || %d ||\n", nLivre);
                        printf("\n----------------------\n");
                    }
                    break;
                
                default: printf("try again");
                    break;
                }


    
    }while(choix != 7);
    



    return 0;
}