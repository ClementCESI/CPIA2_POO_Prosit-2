// Prosit 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <fstream>

using namespace std;


char const *file_path = "test.txt";

int main()
{
    ifstream fichier(file_path, ios::in);  // on ouvre

    if (fichier)
    {
        char caractere;  // notre variable où sera stocké le caractère
        while (fichier.get(caractere)) 
        {
            cout << caractere;  // on l'affiche
        }
    fichier.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;

    return 0;
}