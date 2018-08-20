//Double Linked List Implementation.

#include<iostream>
using namespace std;
typedef struct dblist {
int data;
struct dblist *prev;
struct dblist *next;
}dlist;

dlist *START = NULL;

void insert(int pos,int num) {
dlist *temp = (dlist *)malloc(sizeof(dlist));
temp->data = num;
if(START==NULL) {
temp->prev=NULL;
temp->next=NULL;
START=temp;
}
else {
dlist *t = START;
int count=0;
if(pos==0) {
temp->prev = NULL;
temp->next = START;
START->prev = temp;
START = temp;
return;
}
while(t->next!=NULL) {
if(count==pos-1) {
temp->next = t->next;
t->next = temp;
temp->prev = t;
temp->next->prev = temp;
return;
}
count++;
t =t->next;
}
t->next = temp;
temp->prev = t;
temp->next = NULL;
}
}

void del(int pos) {
if(START==NULL) return;
else {
dlist *temp = START;
int count=0;
if(pos==0) {
START = START->next;
START->prev = NULL;
return;
}
else {
while(temp->next!=NULL) {
if(count==pos-1) {
temp->next = temp->next->next;
if(temp->next==NULL) return;
temp->next->prev = temp;
return;
}
temp = temp->next;
count++;
}
}
}
}

void search(int num);
//void sort(int num);
void traverse() {
if(START==NULL) cout<<"whee";
else {
dlist *temp = START;
while(temp!=NULL) {
cout<<temp->data<<"\t";
temp = temp->next;
}
cout<<endl;
}
}

int main() {
//traverse();
insert(0,3);
traverse();
insert(1,4);
traverse();
insert(2,5);
traverse();
insert(0,2);
traverse();
insert(1,7);
traverse();
del(0);
traverse();
del(1);
traverse();
del(2);
traverse();
//search(100);

}
