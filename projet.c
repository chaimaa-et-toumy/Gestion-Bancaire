#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
struct Comptes_Bancaires {
	char cin[20];
	char nom[50];
	char prenom[50];
	float montant;
};
int max = 1000;
struct Comptes_Bancaires compte[1000];
int    recherche_cin(){
    char cin[20];
    int i;
    printf("donner cin : ");
    scanf("%s",cin);
    for(i = 0;i<sizeof(max);i++)
    {
        if(strstr(cin,compte[i].cin))
        {
            return i;
        }
    }
}

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
	//struct Comptes_Bancaires compte[max];
	int n,i=0,ind_cin,total=0;
	int choix,choix3;
	char rech_cin[20];
	float montantEntree;
	
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
                    if (i > max - 1) 
					{
					i = 0;
                    printf("le stockage est saturé les anciennes informations seront supprimées!");
                    }
                    total++; // 1000
			        if (total > max)
					total = max; // ex max = 999
                  
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
                    printf("\t le stockage est saturé les anciennes informations seront supprimées!");
                                         }
                    total++; 
				    if (total > max)
					total = max; 
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
				    i++;
					if (i > max - 1)
				    {
                     i = 0;
                     printf("le stockage est saturé les anciennes informations seront supprimées!");
                     }
                   	 total++; 
				      if (total > max)
					         total = max; 
				    }
				     else {
                                                  printf("L'option n'existe pas \n");
				            }
                    printf("entrer 1 pour saisir autre personne ou 2 pour retourner au menu principale : ");
                  	scanf("%d", &choix);
                   }
					break;
			case 3 :
                                system("cls");
                                printf("les operations : ");
			            	    printf("Entrer 1 pour Retrait ou 2 pour Depot ou 3 pour annuler : ");
			  					scanf("%d", &choix3);
			    	if (choix3 == 1)
			       	{	
						// idice de compte
						ind_cin = recherche_cin();
	                    printf("\n%s %s %s %f\n",compte[ind_cin].cin,compte[ind_cin].nom,compte[ind_cin].prenom,compte[ind_cin].montant);
								// montant a retire
					    printf("Entrer le montant :");
					    scanf("%f", &montantEntree);

										if (montantEntree > compte[ind_cin].montant)
										printf("Montant invalide!\n");

										else {
										compte[ind_cin].montant -= montantEntree;
										printf("Termine avec succes \n");
										}
	                    printf("\n%s %s %s %f\n",compte[ind_cin].cin,compte[ind_cin].nom,compte[ind_cin].prenom,compte[ind_cin].montant);

			    	}
			  		else if (choix3 == 2)
				   {
				        ind_cin = recherche_cin();
				        printf("\n%s %s %s %f\n",compte[ind_cin].cin,compte[ind_cin].nom,compte[ind_cin].prenom,compte[ind_cin].montant);
			
	         					printf("Entrer le montant :");
								scanf("%f", &montantEntree);
								compte[ind_cin].montant += montantEntree;
								printf("Termine avec succes \n");
								printf("\n%s %s %s %f\n",compte[ind_cin].cin,compte[ind_cin].nom,compte[ind_cin].prenom,compte[ind_cin].montant);
										
					
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
