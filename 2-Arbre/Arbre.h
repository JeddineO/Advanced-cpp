#include "Node.cpp"

template <typename T>
class Arbre
{

public:
    Node<T> *Racine;
    Arbre();
    void Inserer(T);
    void Afficher(Node<T> *root);
   // ~Arbre();
};
