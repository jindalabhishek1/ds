//Linked List Insertion.
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct llist{
    int data;
    struct llist *next;
}linklist;

linklist *START = NULL;

void insertAtBeg(int num) {
    linklist *d = (linklist *)malloc(sizeof(linklist));
    d->data = num;
    d->next=NULL;
    if(START==NULL) {
    //printf("whehee\n");
    START=d;
    START->next=NULL;
    }
    else {
    d->next = START;
    START = d;
    }
}
void insertAtPos(int pos, int num) {
    if(START==NULL) { cout<<"NULL\t"; return; }
    else if(pos==0) { insertAtBeg(num); return; }
    else {
        int count;
        linklist *t = (linklist *)malloc(sizeof(linklist));
        t->data = num;
        count=1;
        linklist *temp = START;
        while(temp!=NULL) {
            if(count==pos) {
            t->next = temp->next;
            temp->next = t;
            }
            count++;
            temp = temp->next;
        }
    }
}

void insertAfterPos(int pos,int num) {
    int count;
    if(START==NULL) { cout<<"NULL\t"; return; }
    else if(pos==0) { insertAtBeg(num); return; }
    else {
        linklist *t = (linklist *)malloc(sizeof(linklist));
        t->data = num;
        count=0;
        linklist *temp = (linklist*)malloc(sizeof(linklist));
        temp = START;
        while(temp!=NULL) {
            if(count==pos) {
                t->next = temp->next;
                temp->next = t;
            }
            count++;
            temp = temp->next;
        }
    }
}


void insertAtEnd(int num) {
    linklist *d = (linklist *)malloc(sizeof(linklist));
    d->data=num;
    d->next=NULL;
    if(START==NULL) {
        //printf("whehee\n");
        START = d;
    }
    else {
        linklist *temp = START;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next=d;
    }
}

void traverse() {
    if(START==NULL) {
        printf("NULL\n");
        return;
    }
    linklist *t;
    t=START;
    while(t->next!=NULL) {
        printf("%d\t",t->data);
        t = t->next;
    }
    printf("%d\t",t->data);
    printf("\n");
}

int main() {
    insertAtPos(0,1);
    traverse();
    insertAtPos(0,2);
    traverse();
    insertAfterPos(0,5);
    traverse();
    insertAtBeg(8);
    traverse();
    insertAtEnd(9);
    traverse();
    insertAtEnd(6);
    traverse();
    insertAtEnd(7);
    traverse();
    insertAtBeg(8);
    traverse();
    insertAfterPos(2,14);
    traverse();
    insertAtPos(2,99);
    traverse();
}
