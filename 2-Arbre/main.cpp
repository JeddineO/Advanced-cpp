#include "Arbre.cpp"

int main()
{
    Arbre<int> Arb;

    Arb.Inserer(5);
    Arb.Inserer(6);
    Arb.Inserer(18);
    Arb.Inserer(2);
    Arb.Inserer(0);
    Arb.Inserer(1);

    Arb.Afficher();
}