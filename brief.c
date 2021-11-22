#include <stdio.h>
#include <stdlib.h>
struct Comptes_Bancaires {
	char cin[20];
	char nomP[100];
	float montant;
};
struct Comptes_Bancaires compte[1000];
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
	int n,i=0;
	
	printf(" Choisissez un nombre de 1 a 6 : ");
	scanf("%d",&n);
	
	while (n != 6)
	{
		switch (n) {
			case 1 : // cin //nom et prenom // montant
					printf("\t\t\t****************** Creer votre Compte ******************\n");
					printf("   Entrez le cin du client : ");
					scanf("%s",compte[i].cin);
					printf("   Entrez le nom et le prenom du client  : ");
					scanf("%s",compte[i].nomP);
					printf("   Entrer le montant du client: ");
					scanf("%f",&compte[i].montant);
					printf("   le compte a ete cree avec succes\n\n");
			    
			        break;
			case 2 :
					printf("affichage");
					break;
			default :
					printf("Operation n'existe pas  \n\n");
					break;
			}
	menu_principal();
	printf("Choisissez un nombre de 1 a 6 ");
	scanf("%d",&n);
	}
	printf(" Operation terminee ");
	return 0;
}
