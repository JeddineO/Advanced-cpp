#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
    std::ifstream fichier("fichier.txt");

    if (!fichier)
    {
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return 1;
    }

    std::map<std::string, int> occurrences;
    std::string mot;

    while (fichier >> mot)
        occurrences[mot]++;

    // Afficher le résultat
    for (const auto &paire : occurrences)
        std::cout << "Le mot '" << paire.first << "' apparait " << paire.second << " fois." << std::endl;

    return 0;
}