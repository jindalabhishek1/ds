/*#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>*/
#include <iostream>
/*#include <algorithm>
#include <unordered_map>*/
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insert (struct Node **head_ref, int new_data)
{
    struct Node *new_node = new Node();
    struct Node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

/*
void display(struct Node *node)
{
    struct Node *last = node;
    int count = 0;
    while (last->next != NULL)
    {
        last = last->next;
        count ++;
        //cout << last->data << " : " << count << endl;
    }
    //cout << count << endl;
    while (count)
    {
        struct Node *temp = node;
        for (int i = 0; i < count; i++)
        {
            temp = temp->next;
        }
        count --;
        cout << temp->data << " ";// << count << endl;
        count = count - 1;
    }
}
*/

void display(Node *node)
{
    while(node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
}

int main() {

    int number,i,n;
    cin>>n;
    struct Node *head = NULL;
    for(i = n; i > 0; i--)
   {
	 cin>>number;
     insert(&head, number);
   }
	display(head);
    return 0;
}
