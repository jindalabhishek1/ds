#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *start = NULL;

node * newNode(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void insertAtBegin(node *np)
{
    if(start == NULL)
    {
        start = np;
    }
    else
    {
        node *temp = new node();
        temp = start;
        start = np;
        np->next = temp;
    }
}

void display(node *np)
{
    while(np != NULL)
    {
        cout << (np->data) << " -> ";
        np = np->next;
    }
    cout << endl;
}
int main()
{
    //node *start = NULL;
    node *first = new node();//NULL;
    node *second = new node();//NULL;
    first = newNode(5);
    //display(first);
    second = newNode(7);
    start = first;
    insertAtBegin(second);
    //insertAtBegin(first);
    display(start);
}
