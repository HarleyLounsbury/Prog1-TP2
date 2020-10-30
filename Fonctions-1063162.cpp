// But :	Programme qui dessine des formes aux dimensions diverses, pleines ou vides, selon les choix que l'utilisateur fait dans les menus	   
// Auteur :	Harley Lounsbury
// Date :  17 Octobre 2018

#include "Fonctions-1063162.h"
// Librairie pour g�rer les communications avec l'utilisateur
#include <iostream>

// Commande pour �viter d'avoir besoin de mettre des pr�fix. 
using namespace std;

// Fonction pour lire des nombres entr�s par l'utilisateur, sans erreur.
double lireNombre()
{
   // Pour lire toutes les b�tises que pourrait taper l'utilisateur, on se cr�e une variable de type cha�ne de caract�res
   // suffisamment longue.
   const int iMAXCLAVIER = 8190;
   char cClavier[iMAXCLAVIER + 1];
   double dNb;

   cin.getline(cClavier, sizeof(cClavier), '\n');

   // On lit toute ce que l'utilisateur tape au clavier dans une cha�ne de caract�res
   // qui accepte n'importe quel caract�re.

   // atof permet de convertir la cha�ne en valeur num�rique de type double
   // MAIS: elle retourne 0 si elle ne peut pas faire la convertion.

   // il faut s'assurer que cClavier commence par un chiffre sinon on redemande � l'utilisateur

   while (!((cClavier[0] >= '0' && cClavier[0] <= '9') || (cClavier[0] == '-' && (cClavier[1] >= '0' && cClavier[1] <= '9'))))
   {
      cout << "Erreur: Vous devez entrer un nombre: ";
      cin.getline(cClavier, sizeof(cClavier), '\n');
   }
   dNb = atof(cClavier);

   return dNb;
}

// Pour afficher le menu de formes. 
void afficherMenu1()
{
   system("cls");
   cout << "Choisissez la forme" << endl;
   cout << "1. Rectangle" << endl;
   cout << "2. Triangle" << endl;
   cout << "3. Carr�" << endl;
   cout << "4. Losange" << endl;
   cout << "5. Hexagone" << endl;
   cout << "6. Octagone" << endl;
   cout << "7. Triangle �quilat�ral" << endl;
   cout << "8. Quitter" << endl;
}

// Pour afficher le menu de remplissage.
void afficherMenu2()
{
   system("cls");
   cout << "Choisissez le remplissage" << endl;
   cout << "1. Forme pleine" << endl;
   cout << "2. Forme vide" << endl;
   cout << "3. Retour au menu pr�c�dent" << endl;
}

// Pour valider le menu. 
int validerMenu(int iChoixMenu, const int iMAXNOMBREOPTIONS)
{
   // INT pour recevoir le choix de l'utilisateur.
   int iChoix;

   // Pour afficher le bon menu. 
   if (iChoixMenu == 1)
      afficherMenu1();
   if (iChoixMenu == 2)
      afficherMenu2();
   // Demander � l'utilisateur son choix parmi les options offertes.
   cout << "Votre choix: ";
   iChoix = lireNombre();

   // Boucle pour s'assurer que le choix de l'utilisateur est bien parmi les options offertes. 
   while (iChoix < 1 || iChoix > iMAXNOMBREOPTIONS)
   {
      cout << endl << "Votre choix doit �tre entre 1 et " << iMAXNOMBREOPTIONS << endl;
      system("pause");
      // �ffacer l'�cran avant d'afficher le menu � nouveau. 
      system("cls");
      if (iChoixMenu == 1)
         afficherMenu1();
      if (iChoixMenu == 2)
         afficherMenu2();
      cout << "Votre choix: ";
      iChoix = lireNombre();
   }
   return iChoix;
}

int genererNbAleatoire(int iMin, int iMax)
{
   // rand() retourne un entier compris entre 0 et une constante qui s'appelle RAND_MAX - 32767 (32768 possibilit�s).
   return rand() % (iMax - iMin + 1) + iMin;
}