#pragma once

// Fonction pour répondre à la demande de chaque forme. 
void traiterRectangle(int iChoixDeRemplissage);
void traiterTriangle(int iChoixDeRemplissage);
void traiterCarre(int iChoixDeRemplissage);
void traiterLosange(int iChoixDeRemplissage);
void traiterHexagone(int iChoixDeRemplissage);
void traiterOctagone(int iChoixDeRemplissage);
void traiterTriangleEquilateral(int iChoixDeRemplissage);

// Fonctions qui dessineront les formes.  
void dessinerRectangle(int iLargeur, int iHauteur, int iRemplis);
void dessinerTriangle1(int iHauteur, int iRemplis);
void dessinerTriangle2(int iHauteur, int iRemplis); 
void dessinerTriangle3(int iHauteur, int iRemplis);
void dessinerTriangle4(int iHauteur, int iRemplis);
void dessinerCarre(int iLargeur, int iRemplis);
void dessinerLosange(int iHauteur, int iRemplis);
void dessinerHexagone(int iLargeurBord, int iRemplis);
void dessinerOctagone(int iLargeurBord, int iRemplis);
void dessinerTriangleEquilateral(int iHauteur, int iRemplis);
