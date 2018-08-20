//LinkedList Deletion
#include<iostream>
using namespace std;
typedef struct llist {
int data;
struct llist *next;
}linklist;

linklist *START = NULL;

void deleteAtBeg() {
if(START==NULL) return;
else {
linklist *temp = START;
START = START->next;
free(temp);
}
}

void deleteAtEnd() {
if(START==NULL) cout<<"yo";
else {
linklist *temp = START;
if(temp->next==NULL) {
START=NULL;
free(temp);
return;
}
while(temp->next->next!=NULL) {
temp = temp->next;
}
linklist *t = temp->next;
temp->next=NULL;
free(t);
}
}

void deleteAfterPos(int pos) {
if(START==NULL) return;
else {
linklist *temp =START;
int count=0;
while(temp->next!=NULL) {
if(count==pos) {
temp->next = temp->next->next;
break;
}
count++;
temp =temp->next;
}
}
}

void deleteAtPos(int pos) {
if(START==NULL) return;
else {
linklist *temp = START;
int count=0;
if(pos==0) { deleteAtBeg(); return; }
while(temp->next!=NULL) {
if(count==pos-1) {
temp->next=temp->next->next;
break;
}
count++;
temp = temp->next;
}
}
}
void deleteWithKey(int key) {
if(START==NULL) return;
linklist *temp = START;
int count=0;
if(temp->data==key) { deleteAtBeg(); return; }
while(temp->next!=NULL) {
if(temp->next->data == key) { temp->next = temp->next->next; return; }
temp = temp->next;
count++;
}
cout<<"Not Found"<<endl;
return;
}

void traverse() {
if(START==NULL) { cout<<"whee"<<endl; }
else {
linklist *temp= START;
while(temp!=NULL) {
cout<<temp->data<<"\t";
temp = temp->next;
}
cout<<endl;
}
}
void insertAtBeg(int num) {
linklist *d = (linklist *)malloc(sizeof(linklist));
d->data = num;
d->next=NULL;
if(START==NULL) {
printf("whehee\n");
START=d;
START->next=NULL;
}
else {
d->next = START;
START = d;
}
}

int main() {
insertAtBeg(10);
traverse();
insertAtBeg(9);
traverse();
insertAtBeg(8);
traverse();
deleteWithKey(11);
traverse();
}
