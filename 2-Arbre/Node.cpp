
template <typename T>
class Node
{
public:
    T val;
    Node<T> *left;
    Node<T> *right;
    Node(T val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
