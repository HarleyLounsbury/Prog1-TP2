// But :	Programme qui dessine des formes aux dimensions diverses, pleines ou vides, selon les choix que l'utilisateur fait dans les menus	   
// Auteur :	Karine Moreau
// Date :  17 Octobre 2018


#include <iostream>		// Bibliothèque qui fournit des fonctions pour permettre la communication entre le programme et l'utilisateur
#include <time.h>		// Bibliothèque qui fournit des fonctions basées sur les dates et heures
#include "Fonctions-1063162.h"		// Bibliothèque du programmeur rassemblant les fonctions permettant la gestion des menus et la validation des choix fait dans ces menus
#include "Formes-1063162.h"		// Bibliothèque du programmeur offrant des fonctions permettant de dessiner différentes formes, pleines ou vides
using namespace std;

int main()
{
   // Définition des constantes 
   const int iQUITTER   = 8;     // Le choix maximum dans le menu 1. Pourrait changer si le programmeur ajoute une forme supplémentaire
   const int iRETOUR = 3;        // Le choix maximum dans le menu 2. Pourrait changer si le programmeur ajoute une option supplémentaire
   
   const int iRECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
   const int iTRIANGLE  = 2;
   const int iCARRE     = 3;
   const int iLOSANGE   = 4;
   const int iHEXAGONE = 5;
   const int iOCTAGONE = 6;
   const int iTRIANGLEEQUILATERAL = 7;

	// Définition des variables.
	int iChoixForme;
	int iChoixRemplissage;

	srand(time(NULL));	            // Permet d'initialiser le random seed
	setlocale(LC_ALL,"");            // Permet de gérer les caractères accentués

   // Afficher le menu des formes et lire un choix valide 
	iChoixForme = validerMenu(1 /* choix du menu des formes */, iQUITTER /* Nombres d'options au menu */);
	
   // Tant que l'utilisateur ne veut pas quitter
	while (iChoixForme != iQUITTER)
	{
	  // Afficher le menu du remplissage et lire un choix valide
      iChoixRemplissage = validerMenu(2 /* Menu du remplissage */, iRETOUR /* Nombres d'options au menu */);
     
      
	  // Si l'utilisateur n'est pas revenu au menu principal
      if (iChoixRemplissage != iRETOUR)
	   {
			// Ici, l'utilisateur a fait le choix d'une forme et du remplissage, il nous reste à traiter et dessiner la forme
			switch (iChoixForme)
			{	
				case iRECTANGLE :
               // Traiter forme demande les dimensions de la forme, affiche la phrase de présentation de la forme et appelle la fonction
               // dessinant la forme
					traiterRectangle (iChoixRemplissage);
                    break;
			    case iTRIANGLE :
					traiterTriangle (iChoixRemplissage);
					break;
				case iCARRE :
					traiterCarre (iChoixRemplissage);
					break;
				case iLOSANGE :
					traiterLosange (iChoixRemplissage);
					break;
            case iHEXAGONE:
               traiterHexagone(iChoixRemplissage);
               break;
            case iOCTAGONE:
               traiterOctagone(iChoixRemplissage);
               break;
            case iTRIANGLEEQUILATERAL:
               traiterTriangleEquilateral(iChoixRemplissage);
               break;
			} // Fin du switch
	   }// fin du if
      
      // On présente de nouveau le menu principal des choix des formes et on lit le choix de l'utilisateur
	  iChoixForme = validerMenu(1 /* Menu des formes*/, iQUITTER /* Nombres d'options au menu*/);

	} // Fin du while (iChoixForme != iQUITTER)
	return 0;

}