#include <iostream>
#include <vector>
#include <chrono>

unsigned long long calculerFibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        std::vector<unsigned long long> nombresFibonacci(n + 1, 0);
        nombresFibonacci[1] = 1;

        for (int i = 2; i <= n; ++i)
        {
            nombresFibonacci[i] = nombresFibonacci[i - 1] + nombresFibonacci[i - 2];
        }

        return nombresFibonacci[n];
    }
}

int main()
{
    int n;
    std::cout << "Entrez la position dans la suite de Fibonacci : ";
    std::cin >> n;

    auto debut = std::chrono::high_resolution_clock::now();

    unsigned long long resultat = calculerFibonacci(n);

    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duree = fin - debut;

    std::cout << "Le nombre de Fibonacci à la position " << n << " est : " << resultat << std::endl;
    std::cout << "Temps d'exécution : " << duree.count() << " secondes" << std::endl;

    return 0;
}
