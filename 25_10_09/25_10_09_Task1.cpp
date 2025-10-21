//Task1 remove node 2. node 1 linked to node 3
#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node *next;
    Node* prev;
};

void printNode(Node currentNode)
{
    cout << currentNode.data << " --> ";
    while (currentNode.next != NULL)
    {
        cout << currentNode.next->data;
        currentNode = *currentNode.next;
        if (currentNode.next != NULL)
            cout << " --> ";
    }
}

int main()
{
    Node node1 = Node();
    Node node2 = Node();
    Node node3 = Node();

    node1.data = "Node 1";
    node1.next = &node3;
    
    node2.data = "Node 2";//this is removed
    node2.next = NULL;

    node3.data = "Node 3";
    node3.next = NULL;

    printNode(node1);
}
