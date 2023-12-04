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

    Pile<float> Pile2;

    Pile2.Empiler(15.6);
    Pile2.Empiler(64.8);
    cout << "\nPile 2 :";
    Pile2.Afficher();
}