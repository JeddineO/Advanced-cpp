#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <chrono>
#include <vector>

using namespace std;

int main()
{
    ifstream fichier("fichier.txt");
    if (!fichier)
    {
        cerr << "Erreur lors de l'ouverture du fichier." << endl;
        return 1;
    }

    map<string, int> occurrences;
    map<string, vector<int>> lignesParMot; // Nouvelle map pour stocker les numéros de ligne par mot
    string mot;
    auto debut = std::chrono::high_resolution_clock::now();

    int numeroLigne = 1;
    while (fichier >> mot)
    {
        occurrences[mot]++;
        lignesParMot[mot].push_back(numeroLigne);
        numeroLigne++;
    }

    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duree = fin - debut;

    // Afficher le résultat
    for (const auto &paire : occurrences)
        cout << "Le mot '" << paire.first << "' apparait " << paire.second << " fois." << endl;

    // Recherche d'un mot spécifique dans la fichier
    cout << "\nEntrez le mot que vous souhaitez rechercher : ";
    string motRecherche;
    cin >> motRecherche;

    // Afficher les lignes contenant le mot recherché
    auto it = lignesParMot.find(motRecherche);
    if (it != lignesParMot.end())
    {
        cout << "\nLe mot '" << motRecherche << "' se trouve dans les lignes suivantes :" << endl;
        for (int ligne : it->second)
        {
            cout << "Ligne " << ligne << endl; // Remplacez par le contenu réel de la ligne
        }
    }
    else
    {
        cout << "\nLe mot '" << motRecherche << "' n'a pas ete trouve dans le fichier." << endl;
    }

    std::cout << "\nTemps d'execution : " << duree.count() << " secondes" << std::endl;

    return 0;
}
