#include <iostreaM>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Construktor for the node class
    Node()
    {
        leftchild = nullptr;  // initialize left child to null
        rightchild = nullptr; // initialiaze rigt child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializeng ROOT to null
    }
    
    void insert()
    {
        int x;
        cout << "Masukkam nilai: ";
        cin >> x;
    }
}