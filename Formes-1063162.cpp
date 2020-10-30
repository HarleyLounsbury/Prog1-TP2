#include "Formes-1063162.h"
#include <iostream>
#include "Fonctions-1063162.h"

using namespace std;

// Pour le motif de remplissage.
char cMotif;

// Fonction pour dessiner les rectangles.
void dessinerRectangle(int iLargeur, int iHauteur, int iRemplis)
{
   // Pour décider quel message nous devrons afficher. 
   if (iRemplis == 1)
   {
      cout << "Voici le rectangle plein de " << iLargeur << "x" << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le rectangle vide de " << iLargeur << "x" << iHauteur << endl;
      cMotif = ' ';
   }
   // Boucle pour dessiner la ligne du haut du cadre. 
   for (int iCompteur = 0; iCompteur < iLargeur; iCompteur++)
   {
      cout << "*";
   }
   cout << endl;
   // Boucle pour compter le nombre de lignes avec le milieu vide.
   // iHauteur - 2 car les lignes supérieur et inférieur sont déssinés apart.
   for (int iCompteurVertical = 0; iCompteurVertical < iHauteur - 2; iCompteurVertical++)
   {
      // Boucle pour dessiner les lignes avec le milieu vide.
      // iValeurLargeur - 2 car la boucle compte seulement les # de milieu en fonction de la largeur.
      cout << "*";
      // Boucle pour ajouter les motifs de remplissage.
      // Largeur - 2 car la bordure occupe 2 places. 
      for (int iCompteur = 0; iCompteur < iLargeur - 2; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*" << endl;
   }
   // Boucle pour dessiner la ligne inférieure du cadre.
   for (int iCompteur = 0; iCompteur < iLargeur; iCompteur++)
   {
      cout << "*";
   }
}

// Fonction pour traiter les rectangles.
void traiterRectangle(int iChoixDeRemplissage)
{
   // Variables pour demander les dimensions.
   int iHauteurChoisie;
   int iLargeurChoisie;
   // Demander les dimensions.
   cout << "Indiquer la largeur: ";
   iLargeurChoisie = lireNombre();
   cout << "Indiquer la hauteur: ";
   iHauteurChoisie = lireNombre();

   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Passer les dimensions choisies par l'utilisateur à la fonction pour dessiner.
   dessinerRectangle(iLargeurChoisie, iHauteurChoisie, iChoixDeRemplissage);

   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}

void dessinerTriangle1(int iHauteur, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le triangle plein de hauteur " << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le triangle vide de hauteur " << iHauteur << endl;
      cMotif = ' ';
   }
      // Boucle pour compter la hauteur. La boucle va continuer jusqu'à la hauteur specifiée.
      for (int iCompteurLignes = 1; iCompteurLignes <= iHauteur; iCompteurLignes++)
      {
         // Les deux premières lignes sont spéciale, car il n'y a pas de motif à l'intérieur.
         switch (iCompteurLignes)
         {
         case 1:
            cout << "*" << endl;
            break;
         case 2:
            cout << "**" << endl;
            break;
         }
         // Pour l'espace vide, qui est compris entre la ligne 2 et la dernière ligne, non inclus.  
         if (iCompteurLignes > 2 && iCompteurLignes < iHauteur)
         {
            // Chaque ligne commence avec la bordure.
            cout << "*";
            // Boucle pour tenir compte de combien de motifs vont sur chaque ligne, qui est le nombre de ligne - 2 pour les bordures. 
            for (int iCompteur = 1; iCompteur <= iCompteurLignes - 2; iCompteur++)
            {
               cout << cMotif;
            }
            // Chaque ligne termine avec la bordure, et on passe à la prochaine ligne. 
            cout << "*" << endl;
         }
         // Pour la dernière ligne, qui est une bordure et qui est équivalent à la hauteur. 
         if (iCompteurLignes == iHauteur)
         {
            for (int iCompteur = 1; iCompteur <= iCompteurLignes; iCompteur++)
            {
               cout << "*";
            }
         }
      }
      cout << endl;
   }
  
void dessinerTriangle2(int iHauteur, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le triangle plein de hauteur " << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le triangle vide de hauteur " << iHauteur << endl;
      cMotif = ' ';
   }
   // Boucle pour ajouter les espaces entre le cadre du console et la bordure de triangle. 
   for (int iCompteurLignes = 1, iEspaces = iHauteur - 1; iCompteurLignes <= iHauteur; iCompteurLignes++, iEspaces -= 1)
   {
      for (int iCompteur = 0; iCompteur < iEspaces; iCompteur++)
      {
         cout << " ";
      }
      // Les deux premières lignes sont spéciale, car il n'y a pas d'espace vide au milieu.
      switch (iCompteurLignes)
      {
      case 1:
         cout << "*" << endl;
         break;
      case 2:
         cout << "**" << endl;
         break;
      }
      // Pour l'espace vide, qui est compris entre la ligne 2 et la dernière ligne, non inclus.  
      if (iCompteurLignes > 2 && iCompteurLignes < iHauteur)
      {
         // Chaque ligne commence avec la bordure.
         cout << "*";
         // Boucle pour tenir compte de combien de motifs vont sur chaque ligne, qui est le nombre de ligne - 2 pour les bordures. 
         for (int iCompteur = 1; iCompteur <= iCompteurLignes - 2; iCompteur++)
         {
            cout << cMotif;
         }
         // Chaque ligne termine avec la bordure, et on passe à la prochaine ligne. 
         cout << "*" << endl;
      }
      // Pour la dernière ligne, qui est une bordure et qui est équivalent à la hauteur. 
      if (iCompteurLignes == iHauteur)
      {
         for (int iCompteur = 1; iCompteur <= iCompteurLignes; iCompteur++)
         {
            cout << "*";
         }
      }
   }
}

void dessinerTriangle3(int iHauteur, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le triangle plein de hauteur " << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le triangle vide de hauteur " << iHauteur << endl;
      cMotif = ' ';
   }
   // Boucle pour dessiner la bordure du haut. 
   for (int iCompteur = 0; iCompteur < iHauteur; iCompteur++)
   {
      cout << "*";
   }
   cout << endl;
   // On initialise iCompteurLignes par rapport la hauteur, car le largeur (qui est la première ligne) est égal à la hauteur.
   // On enleve 1 du total nombre de lignes car la bordure supérieure est fait.
   int iCompteurLignes = iHauteur - 1;
   // Condtion pour dessiner la section de milieu. 
   // La boucle va arrêter à la troisième ligne du bas, car le deux dernières lignes sont seulement de la bordure. 
   while (iCompteurLignes > 2)
   {
      cout << "*";
      for (int iCompteur = 0; iCompteur < iCompteurLignes - 2; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*" << endl;
      iCompteurLignes--;
   }
   // Pour les dernières lignes.
   cout << "**" << endl << "*" << endl;
}

void dessinerTriangle4(int iHauteur, int iRemplis)
{
   // Pour décider quel message et motif de remplissage nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le triangle plein de hauteur " << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le triangle vide de hauteur " << iHauteur << endl;
      cMotif = ' ';
   }
   // On initialise iCompteurLignes à la hauteur
   int iCompteurLignes = iHauteur;
   for (int iCompteurMotifs = 0; iCompteurMotifs < iCompteurLignes; iCompteurMotifs++)
   {
      cout << "*";
   }
   cout << endl;
   iCompteurLignes--;
   while (iCompteurLignes > 0)
   {
      for (int iCompteur = 0; iCompteur < iHauteur - iCompteurLignes; iCompteur++)
      {
         cout << " ";
      }
      if (iCompteurLignes > 2)
      {
         cout << "*";
         for (int iCompteur = 0; iCompteur < iCompteurLignes - 2; iCompteur++)
         {
            cout << cMotif;
         }
         cout << "*" << endl;
      }
      if (iCompteurLignes == 2)
      {
         cout << "**" << endl;
      }
      if (iCompteurLignes == 1)
      {
         cout << "*" << endl;
      }
      iCompteurLignes--;
   }
}
  

void traiterTriangle(int iChoixDeRemplissage)
{
   // Constantes pour générer un nombre aléatoire.
   // Les constantes signifie le nombre associé à chaque triangle. 
   // La constante iMAXTRIANGLES représente le nombre total de triangles (qui veut dire la dernière triangle avec le gros nombre associé). 
   const int iMINTRIANGLES = 1;
   const int iMAXTRIANGLES = 4;

   // Variables pour demander les dimensions.
   int iHauteurChoisie;

   // Demander les dimensions.
   cout << "Indiquer la hauteur: ";
   iHauteurChoisie = lireNombre();
   
   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Switch pour déterminer aléatoirement quel triangle à dessiner. 
   switch (genererNbAleatoire(iMINTRIANGLES, iMAXTRIANGLES))
   {
   case 1:
      dessinerTriangle1(iHauteurChoisie, iChoixDeRemplissage);
      break;
   case 2:
      dessinerTriangle2(iHauteurChoisie, iChoixDeRemplissage);
      break;
   case 3:
      dessinerTriangle3(iHauteurChoisie, iChoixDeRemplissage);
      break;
   case 4:
      dessinerTriangle4(iHauteurChoisie, iChoixDeRemplissage);
      break;
   default: 
      cout << "Un erreur s'est produit. Veuillez réessayer." << endl;
      break;
   }
   
   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}

void dessinerCarre(int iLargeur, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le carré plein de largeur " << iLargeur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le carré vide de largeur " << iLargeur << endl;
      cMotif = ' ';
   }
   // Boucle pour dessiner la ligne du cadre supérieur.
   for (int iCompteur = 0; iCompteur < iLargeur; iCompteur++)
   {
      cout << "*";
   }
   cout << endl;
   // Boucle pour compter le nombre de lignes avec milieu vide.
   // iValeurHauter - 2 car les lignes supérieur et inférieur sont déssinés apart.
   for (int iCompteurVertical = 0; iCompteurVertical < iLargeur - 2; iCompteurVertical++)
   {
      // Boucle pour dessiner les lignes avec milieu vide.
      // iValeurLargeur - 2 car le boucle compte seulement les # de milieu en fonction de la largeur.
      cout << "*";
      for (int iCompteur = 0; iCompteur < iLargeur - 2; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*" << endl;
   }
   // Boucle pour dessiner la ligne du cadre inférieur.
   for (int iCompteur = 0; iCompteur < iLargeur; iCompteur++)
   {
      cout << "*";
   }
}

void traiterCarre(int iChoixDeRemplissage)
{
   // Variable pour demander les dimensions.
   int iLargeurChoisie;
   // Demander les dimensions.
   cout << "Indiquer la largeur: ";
   iLargeurChoisie = lireNombre();

   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Passer les dimensions choisies par l'utilisateur à la fonction pour dessiner.
   dessinerCarre(iLargeurChoisie, iChoixDeRemplissage);

   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}

void dessinerLosange(int iHauteur, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le losange plein de " << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le losange vide de " << iHauteur << endl;
      cMotif = ' ';
   }
   // Déclaration de variables de manipulation.
   // Les opérateurs sont en place pour diminuer et augmenter les espaces et les motifs de remplissage, respectivement.
   // Aprés que iCompteurDeLigne dépasse le milieu, ils seront réaffecté pour faire l'inverse. 
   int iCompteurDeLigne = 1;
   int iOperateurEspace = 1;
   int iOperateurRemplissage = 2;
   // Boucle pour la première ligne, qui n'a pas de remplissage.
   for (int iCompteur = 0; iCompteur < iHauteur / 2; iCompteur++)
   {
      cout << " ";
   }
   cout << "*" << endl;
   // Boucle pour la section principale.
   // Le point du losange est au milieu. Le division d'entier retourne la valeur arrondi vers le bas, mais le motif du cadre prend aussi une place, donc le - 1.
   for (int iEspacesAvant = iHauteur / 2 - 1, iRemplissage = 1; iCompteurDeLigne < iHauteur - 1; iEspacesAvant -= iOperateurEspace, iRemplissage += iOperateurRemplissage, iCompteurDeLigne++)
   {
      for (int iCompteur = 0; iCompteur < iEspacesAvant; iCompteur++)
      {
         cout << " ";
      }
      cout << "*";
      for (int iCompteur = 0; iCompteur < iRemplissage; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*" << endl;
      if (iCompteurDeLigne == iHauteur / 2)
      {
         iOperateurEspace = -1;
         iOperateurRemplissage = -2;
      }
   }
   // Boucle pour la dernière ligne, où il n'y a pas de remplissage.
   for (int iCompteur = 0; iCompteur < iHauteur / 2; iCompteur++)
   {
      cout << " ";
   }
   cout << "*" << endl;
}

void traiterLosange(int iChoixDeRemplissage)
{
   // Variable pour demander les dimensions.
   int iHauteurChoisie;
   // Demander les dimensions.
   cout << "Indiquer la hauteur: ";
   iHauteurChoisie = lireNombre();

   // Pour s'assurer que le nombre est impaire.
   while (iHauteurChoisie % 2 == 0)
   {
      cout << "Erreur: la hauteur pour le losange doit être impaire." << endl;
      cout << "Indiquer la hauteur: ";
      iHauteurChoisie = lireNombre();
   }

   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Passer les dimensions choisies par l'utilisateur à la fonction pour dessiner.
   dessinerLosange(iHauteurChoisie, iChoixDeRemplissage);

   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}

void dessinerHexagone(int iLargeurBord, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le hexagone plein avec le bord de " << iLargeurBord << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le hexagone vide avec le bord de " << iLargeurBord << endl;
      cMotif = ' ';
   }
   int iCompteurDeLigne = 0;
   int iOperateurEspace = 1;
   int iOperateurRemplissage = 2;
   // Pour le bord du haut.
   // Les espaces.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << " ";
   }
   // Le cadre.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << "*";
   }
   // Passe à la ligne
   cout << endl;
   iCompteurDeLigne++;
   // Section principale.
   // L'hexagone suit le même principe que le losange pour l'usage d'operateurs pour manipuler les augmentations. 
   for (int iEspacesAvant = iLargeurBord - 1, iRemplissage = iLargeurBord; iCompteurDeLigne < iLargeurBord * 2 - 2; iEspacesAvant -= iOperateurEspace, iRemplissage += iOperateurRemplissage, iCompteurDeLigne++)
   {
      for (int iCompteur = 0; iCompteur < iEspacesAvant; iCompteur++)
      {
         cout << " ";
      }
      cout << "*";
      for (int iCompteur = 0; iCompteur < iRemplissage; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*";

      cout << endl;
      // Réaffectation des operateurs.
      // La réaffectation est en fonction du hauteur, basé sur l'idée de séparé la forme en formes géometrique plus simple (triangles à angle droit avec 2 côtés égaux, des carrés).
      if (iCompteurDeLigne >= iLargeurBord - 1)
      {
         iOperateurEspace = -1;
         iOperateurRemplissage = -2;
      }
   }
   // Pour le bord du bas.
   // Les espaces.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << " ";
   }
   // Le cadre.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << "*";
   }
}

void traiterHexagone(int iChoixDeRemplissage)
{
   // Variable pour demander les dimensions.
   int iLargeurChoisie;
   // Demander les dimensions.
   cout << "Indiquer la largeur d'un bord: ";
   iLargeurChoisie = lireNombre();

   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Passer les dimensions choisies par l'utilisateur à la fonction pour dessiner.
   dessinerHexagone(iLargeurChoisie, iChoixDeRemplissage);

   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}

void dessinerOctagone(int iLargeurBord, int iRemplis)
{
   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le octagone plein avec le bord de " << iLargeurBord << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le octagone vide avec le bord de " << iLargeurBord << endl;
      cMotif = ' ';
   }
   int iCompteurDeLigne = 0;
   int iOperateurEspace = 1;
   int iOperateurRemplissage = 2;
   // Pour le bord du haut.
   // Les espaces.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << " ";
   }
   // Le cadre.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << "*";
   }
   // Passe à la ligne
   cout << endl;
   iCompteurDeLigne++;
   // Section principale.
   // L'octagone suit le même principe que le losange pour l'usage d'operateurs pour manipuler les augmentations. 
   for (int iEspacesAvant = iLargeurBord - 1, iRemplissage = iLargeurBord; iCompteurDeLigne < iLargeurBord * 3 - 2; iEspacesAvant -= iOperateurEspace, iRemplissage += iOperateurRemplissage, iCompteurDeLigne++)
   {
      for (int iCompteur = 0; iCompteur < iEspacesAvant; iCompteur++)
      {
         cout << " ";
      }
      cout << "*";
      for (int iCompteur = 0; iCompteur < iRemplissage; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*";
      
      cout << endl;
      // Réaffectation des operateurs.
      // La réaffectation est en fonction du hauteur, basé sur l'idée de séparé la forme en formes géometrique plus simple (triangles à angle droit avec 2 côtés égaux, des carrés).
      if (iCompteurDeLigne >= iLargeurBord - 1)
      {
         // Pour le coté du centre de l'octagone, qui reste parallel à la fenêtre du programme (le nombre d'espaces and motifs ne change pas).
         iOperateurEspace = 0;
         iOperateurRemplissage = 0;
      }
      if (iCompteurDeLigne >= iLargeurBord * 2 - 1)
      {
         // Pour la section inférieure, où les espaces avant le dessin augmente et le nombre de motifs à l'intérieur diminue. 
         iOperateurEspace = -1;
         iOperateurRemplissage = -2;
      }      
   }
   // Pour le bord du bas.
   // Les espaces.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << " ";
   }
   // Le cadre.
   for (int iCompteur = 0; iCompteur < iLargeurBord; iCompteur++)
   {
      cout << "*";
   }
}

void traiterOctagone(int iChoixDeRemplissage)
{
   // Variable pour demander les dimensions.
   int iLargeurChoisie;
   // Demander les dimensions.
   cout << "Indiquer la largeur d'un bord: ";
   iLargeurChoisie = lireNombre();

   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Passer les dimensions choisies par l'utilisateur à la fonction pour dessiner.
   dessinerOctagone(iLargeurChoisie, iChoixDeRemplissage);

   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}

void dessinerTriangleEquilateral(int iHauteur, int iRemplis)
{
   // ** Les dimensions affichées à l'écran ne sont pas parfaitment précises. C'est dû au fait qu'on doit 
   // fonctionner avec une hauteur ET des côtés toutes en nombres entiers. 

   // Pour décider quel message nous devrons afficher.
   if (iRemplis == 1)
   {
      cout << "Voici le triangle équilatéral plein avec le hauteur de " << iHauteur << endl;
      cMotif = '#';
   }
   if (iRemplis == 2)
   {
      cout << "Voici le triangle équilatéral vide avec le hauteur de " << iHauteur << endl;
      cMotif = ' ';
   }
   // Pour calculer la longueur des côtés.
   // 97/56 est une approximation de la racine carrée de 3.
   // Le rapport hauteur / longeur de côté est: 
   int iLongeurCote = iHauteur * ( 2 / (97 / 56) );
   // Oui, on pourra inclure math.h et utiliser la fonction sqrt(), mais vu qu'on peut seulement imprimer des motifs en nombre
   // entier sur l'écran, cette précision n'est pas nécessaire pour cet exercice.
   // Boucle pour la première ligne, qui n'a pas de remplissage.
   for (int iCompteur = 0; iCompteur < iLongeurCote / 2; iCompteur++)
   {
      cout << " ";
   }
   cout << "*" << endl;
   // La section avec de remplissage.
   for (int iEspacesAvant = iLongeurCote / 2 - 1, iRemplissage = 1, iCompteurDeLigne = 0; iCompteurDeLigne < iHauteur; iEspacesAvant--, iRemplissage += 2, iCompteurDeLigne++)
   {
      for (int iCompteur = 0; iCompteur < iEspacesAvant; iCompteur++)
      {
         cout << " ";
      }
      cout << "*";
      for (int iCompteur = 0; iCompteur < iRemplissage; iCompteur++)
      {
         cout << cMotif;
      }
      cout << "*" << endl;
   }
   // Pour la dernière ligne, avec que les motifs de bordure.
   for (int iCompteur = 0; iCompteur < iLongeurCote + 1; iCompteur++)
   {
      cout << "*";
   }
   cout << endl;
}

void traiterTriangleEquilateral(int iChoixDeRemplissage)
{
   // Variable pour demander les dimensions.
   int iHauteurChoisie;
   // Demander les dimensions.
   cout << "Indiquer la hauteur: ";
   iHauteurChoisie = lireNombre();

   // Éffacer l'écran avant d'afficher.
   system("cls");

   // Passer les dimensions choisies par l'utilisateur à la fonction pour dessiner.
   dessinerTriangleEquilateral(iHauteurChoisie, iChoixDeRemplissage);

   // Espace pour l'ergonomie.
   cout << endl;
   // Pause dans system avant de retourner au menu principale.
   system("pause");
   // Éffacer l'écran avant d'afficher le menu principale.
   system("cls");
}
