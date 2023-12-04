#include "Arbre.cpp"

int main()
{
    Arbre<int> Arb;

    Arb.Inserer(5);
    Arb.Inserer(6);
    Arb.Inserer(8);

    Arb.Afficher(Arb.Racine);
}