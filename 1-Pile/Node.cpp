
template <typename T> class Node
{
public:
    T val;
    Node<T> *svt;
    Node(T val)
    {
        this->val = val;
        this->svt = nullptr;
    }
};

