#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
};

Node * NewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void InsertAtFront(Node **head_ref, int data)
{
    Node *newNode = NewNode(data);
    newNode->next = *head_ref;
    if (*head_ref != NULL)
    {
        (*head_ref)->prev = newNode;
    }
    *head_ref = newNode;
}

void InsertAtEnd(Node **head_ref, int data)
{
    Node *last = *head_ref;
    Node *newNode = NewNode(data);
    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}

void InsertAfter (Node *prevNode, int data)
{
    if (prevNode == NULL)
    {
        cout << "Previous node can't be NULL\n";
        return;
    }

    Node *newNode = NewNode(data);
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

void InsertBefore (Node **head_ref, Node *nextNode, int data)
{
    if (nextNode == NULL)
    {
        cout << "Next Node can't be NULL\n";
        return;
    }
    
    Node *newNode = NewNode(data);
    newNode->prev = nextNode->prev;
    nextNode->prev = newNode;
    newNode->next = nextNode;
    if (newNode->prev != NULL)
    {
        newNode->prev->next = newNode;
    }
    else
    {
        (*head_ref) = newNode;
    }
}

void Display(Node *head)
{
    Node *last;
    cout << "Traversal from Front:\n";
    while (head != NULL)
    {
        cout << "Data is : " << head->data << endl;
        last = head;
        head = head->next;
    }

    cout << "Traversal from last:\n";
    while (last != NULL)
    {
        cout << "Data is : " << last->data << endl;
        last = last->prev;
    }
}
int main(void)
{
    Node *head = NULL;
    InsertAtFront(&head, 1);
    InsertAtFront(&head, 2);
    InsertAtEnd(&head, 3);
    InsertAfter(head->next, 4);
    InsertBefore(&head, head->next->next, 5);
    Display(head);
}