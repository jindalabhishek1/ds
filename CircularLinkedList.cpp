#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node * addToEmpty(Node * last, int data)
{
    if (last != NULL)
    {
        return last;
    }

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = newNode;
    // last->next = newNode;
    return newNode;
}

Node * addAtEnd(Node *last, int data)
{
    if (last == NULL)
    {
        last = addToEmpty(last, data);
        return last;
    }
    
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}

Node *addAtBegin(Node *last, int data)
{
    if (last == NULL)
    {
        last = addToEmpty(last, data);
        return last;
    }

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    return last;
}

Node * addAfter(Node * last, int data, int key)
{
    if (last == NULL)
    {
        return NULL;
    }

    Node *newNode, *p;
    p = last->next;
    do
    {
        if (p->data == key)
        {
            newNode = new Node();
            newNode->data = data;
            newNode->next = p->next;
            p->next = newNode;
            if (p == last)
            {
                last = newNode;
            }
            return last;
        }
        p = p->next;
    } while (p != last->next);

    cout << key << " not present in the list\n";
    return last;
}

void display(Node *last)
{
    if (last == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    Node *p = last->next;
    do
    {
        cout << "Data is : " << p->data << endl;
        p = p->next;
    } while (p != last->next);
}

int main(void)
{
    Node *last = NULL; 
  
    last = addToEmpty(last, 6); 
    last = addAtBegin(last, 4); 
    last = addAtBegin(last, 2); 
    last = addAtEnd(last, 8); 
    last = addAtEnd(last, 12); 
    last = addAfter(last, 10, 8); 
  
    display(last);
    return 0;
}