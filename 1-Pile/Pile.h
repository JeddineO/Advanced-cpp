#include "Node.cpp"

template <typename T>
class Pile
{
private:
    Node<T> *tete;
public:
    Pile();
    // Pile(const Pile &);
    // ~Pile();
    void Empiler(T);
    void Depiler();
    void Afficher();
};

