#include "Arbre.h"
#include <iostream>
using namespace std;

template <typename T>
Arbre<T>::Arbre()
{
    this->Racine = nullptr;
}

#include <random>

template <typename T>
void Arbre<T>::Inserer(T val)
{
    Node<T> *tmp = this->Racine;

    // generation nombre arbitraire soit 0 ou 1
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0, 1);

    while (tmp)
    {
        int t = distribution(gen);
        if (t)
        {
            if (tmp->left)
            {
                tmp = tmp->left;
            }
            else
            {
                tmp->left = new Node<T>(val);
                return;
            }
        }
        else
        {
            if (tmp->right)
            {
                tmp = tmp->right;
            }
            else
            {
                tmp->right = new Node<T>(val);
                return;
            }
        }
    }
    // Si l'arbre est vide
    this->Racine = new Node<T>(val);
}

template <class T>
void Arbre<T>::Afficher()
{
    if (!this->Racine)
        cout << "Empty tree" << endl;
    else
        this->displayHorizontal(this->Racine, 0);
}

template <class T>
void Arbre<T>::displayHorizontal(Node<T> *node, int level)
{
    if (node)
    {
        this->displayHorizontal(node->right, level + 1);
        for (int i = 0; i < level; i++)
            cout << "\t";
        cout << node->val << endl;
        this->displayHorizontal(node->left, level + 1);
    }
}