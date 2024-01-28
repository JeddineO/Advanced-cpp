#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
#include <chrono>

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
    string mot;
    auto debut = std::chrono::high_resolution_clock::now();
    while (fichier >> mot)
        occurrences[mot]++;
    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duree = fin - debut;

    // Afficher le résultat
    for (const auto &paire : occurrences)
        cout << "Le mot '" << paire.first << "' apparait " << paire.second << " fois." << endl;

    std::cout << "Temps d'execution : " << duree.count() << " secondes" << std::endl;

    return 0;
}