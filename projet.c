#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct Comptes_Bancaires {
	char cin[20];
	char nom[50];
	char prenom[50];
	float montant;
};
int max = 10000;

int i;
void menu_principal()
{
	printf("\n\t\t\t****************** Menu principal ********************\n\n");
    printf("  --> Pour ajouter un nouveau compte, inserer 1..................... \n");
    printf("  --> Pour ajouter plusieurs nouveaux comptes, inserer 2............\n");
    printf("  --> Pour faire des operations sur compte, inserer 3...............\n");
    printf("  --> Pour afficher les comptes, inserer 4..........................\n");
    printf("  --> Pour fidelisation, inserer 5 .................................\n");
    printf("  --> Pour quitter, inserer 6 ......................................\n");
    printf("\n");
}


int main() {
	menu_principal();
	struct Comptes_Bancaires compte[max];
	int n,i=0;
	int choix;
	
	printf(" Choisissez un nombre de 1 a 6 : ");
	scanf("%d",&n);
	
	while (n != 6)
	{
		switch (n) {
			case 1 : // cin //nom et prenom // montant
			    	system("cls");
			      	printf("\n\t\t\t****************** Creer le Compte ******************\n");
					printf("   Entrez le cin du client : ");
					scanf("%s",compte[i].cin);
					printf("   Entrez le nom du client  : ");
					scanf("%s",compte[i].nom);
					printf("   Entrez le prenom du client  : ");
					scanf("%s",compte[i].prenom);
					printf("   Entrer le montant du client: ");
					scanf("%f",&compte[i].montant);
					printf("   le compte a ete cree avec succes\n\n");
								       

					 i++;
                    if (i > max - 1) {
                        i = 0;
                        printf("le stockage est saturé les anciennes informations seront supprimées!");
                    }
                  
				    break;
			case 2 :
                                        system("cls");
				        printf("\n\t\t\t****************** Creer le Compte ******************\n");
                                        printf("   Entrez le cin du client : ");
					scanf("%s",compte[i].cin);
					printf("   Entrez le nom du client  : ");
					scanf("%s",compte[i].nom);
					printf("   Entrez le prenom du client  : ");
					scanf("%s",compte[i].prenom);
					printf("   Entrer le montant du client: ");
					scanf("%f",&compte[i].montant);
					printf("   le compte a ete cree avec succes\n\n");
					 i++;
                    if (i > max - 1) {
                        i = 0;
                        printf("le stockage est saturé les anciennes informations seront supprimées!");
                    }
				
					printf("entrer 1 pour saisir autre personne ou 2 pour retourner au menu principale : ");
                    scanf("%d", &choix);
				    while (choix != 2)
                    {
                        if (choix == 1) {
						printf("   Entrez le cin du client : ");
						scanf("%s",compte[i].cin);
						printf("   Entrez le nom du client  : ");
					    scanf("%s",compte[i].nom);
					    printf("   Entrez le prenom du client  : ");
					    scanf("%s",compte[i].prenom);
					    printf("   Entrer le montant du client: ");
					    scanf("%f",&compte[i].montant);
					     if (i > max - 1) {
                        i = 0;
                        printf("le stockage est saturé les anciennes informations seront supprimées!");
                   		 }
				    	}
						else {
                            printf("L'option n'existe pas \n"); }
                            printf("entrer 1 pour saisir autre personne ou 2 pour retourner au menu principale : ");
                    		scanf("%d", &choix);
                    }
					break;
			default :
					printf("Operation n'existe pas  \n\n");
					break;
			}
	menu_principal();
	printf("Choisissez un nombre de 1 a 6 : ");
	scanf("%d",&n);
	}
	printf(" Operation terminee ");
	return 0;
}
