#include <iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

Node* NewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void Append(Node **head_ref, int data)
{
    Node *last = *head_ref;
    Node *newNode = NewNode(data);
    while (last->next != NULL)
    {
        last = last->next;
    }

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    last->next = newNode;
    return;
}

void InsertAt(Node *previous, int data)
{
    if (previous == NULL)
    {
        cout << "Previous can't be NULL!!!\n";
    }

    Node *newNode = NewNode(data);
    newNode->next = previous->next;
    previous->next = newNode;
    // return;
}

void InsertAtFront(Node **head_ref, int data)
{
    Node *newNode = NewNode(data);
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void Display(Node *node)
{
    while (node != NULL)
    {
        cout << "Data is :" << node->data << endl;
        node = node->next;
    }
}

void Delete(Node **head_ref, int key)
{
    Node *temp = *head_ref;
    Node *prev;
    
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Key not found\n";
        return;
    }

    prev->next = temp->next;
    delete(temp);
}

int main(void)
{
    Node *head = NULL;
    InsertAtFront(&head, 1);
    InsertAtFront(&head, 2);
    Append(&head, 3);
    Append(&head, 4);
    InsertAt(head, 5);
    InsertAt(head->next, 6);
    cout << "Before deletion: \n";
    Display(head);
    Delete(&head, 2);
    cout << "After deleting head: \n";
    Display(head);
    return 0;
}
