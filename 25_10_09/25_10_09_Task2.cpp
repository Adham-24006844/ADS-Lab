//Task2 doubly linked list
#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node* next;
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
    node1.next = &node2;
    node1.prev = NULL;

    node2.data = "Node 2";
    node2.next = &node3;
    node2.prev = &node1;

    node3.data = "Node 3";
    node3.next = NULL;
    node3.prev = &node2;

    printNode(node1);
}