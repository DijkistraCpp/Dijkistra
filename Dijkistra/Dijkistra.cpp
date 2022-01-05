// Dijkistra.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Header.h"



int main()
{
    map<int, int> Map[4];

    map<int, int> Precedent[4];

    int Distance[4];
    int Prec[4];

    Map[0].insert(std::make_pair<int, int>(1, 1));
    Map[0].insert(std::make_pair<int, int>(2, 2));
    Map[1].insert(std::make_pair<int, int>(3, 5));
    Map[2].insert(std::make_pair<int, int>(3, 1));
    
    Precedent[1].insert(std::make_pair<int, int>(0, 1));
    Precedent[2].insert(std::make_pair<int, int>(0, 2));
    Precedent[3].insert(std::make_pair<int, int>(2, 1));
    Precedent[3].insert(std::make_pair<int, int>(1, 5));

    Dijkistra(Map,Prec , Distance, 0);
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
