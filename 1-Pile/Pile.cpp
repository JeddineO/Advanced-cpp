#include "Pile.h"
#include <iostream>
using namespace std; 
template <typename T>
Pile<T>::Pile()
{
    tete = nullptr;
}

template <typename T>
void Pile<T>::Empiler(T val)
{
    Node<T> *nouveauNoeud = new Node<T>(val);
    nouveauNoeud->svt = tete;
    tete = nouveauNoeud;
}

template <typename T>
void Pile<T>::Depiler()
{
    Node<T> *tmp;
    tmp = tete;
    tete = tete->svt;
    free(tmp);
}

template <typename T>
void Pile<T>::Afficher()
{
    Node<T> *tmp;
    tmp = tete;
    while (tmp)
    {
        cout << "\t" << tmp->val;
        tmp = tmp->svt;
    }
}