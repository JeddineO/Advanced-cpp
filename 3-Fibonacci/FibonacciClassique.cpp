#include <iostream>
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
        unsigned long long a = 0;
        unsigned long long b = 1;
        unsigned long long result = 0;

        for (int i = 2; i <= n; ++i)
        {
            result = a + b;
            a = b;
            b = result;
        }

        return result;
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
