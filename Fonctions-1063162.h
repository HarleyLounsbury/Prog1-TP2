// Directive pour assurer que ce fichier est inclus seulement 1 fois � compilation.
#pragma once

// Fonction pour afficher les menus.
// Retourne VOID, car ce n'est que de l'affichage.
void afficherMenu1();
void afficherMenu2();

// Fonction pour valider le menu.
// Cette fonction retourne INT, qui sera la valeur du choix.
// Cette fonction prend comme arguments: un INT, qui va decider quel menu � choisir,
//                                       un INT, qui signifie le nombre d'options au menu.
int validerMenu(int iChoixMenu, const int iMAXNOMBREOPTIONS);

// Fonction pour g�n�rer de nombres al�atoires
int genererNbAleatoire(int iMin, int iMax);

// Fonction pour lire des nombres entr�s par l'utilisateur, sans erreur.
double lireNombre();