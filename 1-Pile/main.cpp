#include <iostream>
#include "Pile.cpp"

using namespace std;

int main()
{
    Pile<int> Pile1;

    Pile1.Empiler(5);
    Pile1.Empiler(6);
    cout << "Pile 1 :";
    Pile1.Afficher();

    Pile<int> Pile2;

    Pile2.Empiler(15);
    Pile2.Empiler(64);
    cout << "\nPile 2 :";
    Pile2.Afficher();

    Pile<int> Pile3;
    Pile3 = Pile1 + Pile2;
    cout << "\nPile 3 :";
    Pile3.Afficher();
}