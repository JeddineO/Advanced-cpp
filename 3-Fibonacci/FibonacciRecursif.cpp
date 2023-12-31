#include <iostream>
#include <chrono>

long long calculerFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return calculerFibonacci(n - 1) + calculerFibonacci(n - 2);
    }
}

int main()
{
    int n;

    std::cout << "Entrez la position dans la suite de Fibonacci : ";
    std::cin >> n;

    auto debut = std::chrono::high_resolution_clock::now();
    long long resultat = calculerFibonacci(n);
    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duree = fin - debut;

    std::cout << "Le nombre de Fibonacci à la position " << n << " est : " << resultat << std::endl;
    std::cout << "Temps d'exécution : " << duree.count() << " secondes" << std::endl;

    return 0;
}
