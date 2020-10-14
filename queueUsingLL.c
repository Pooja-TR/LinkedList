//FIFO
#include<stdio.h> 
#include<stdlib.h> 

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* currNode = NULL;
struct node* old = NULL;

void enqueue(int num){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        newNode->data = num;
        newNode->next = NULL;
        head = newNode;
        currNode=newNode;
    }
    else{
        currNode->next =newNode;
        newNode->data = num;
        newNode->next=NULL;
        old =currNode;
        currNode=newNode;
    }                         
}

void dequeue(){
    if(head==NULL){
        printf("Cannot do dequeue");
    }else{
        printf("DEqueued  %d", head->data);
        head=head->next;
    }
}

void printLinkList()
{
    struct node* printNode = head;
    while(printNode != NULL)
    {
        printf(" %d",printNode->data);
        printNode = printNode->next;
    }
}


int main(){
    enqueue(5);
    enqueue(10);
    enqueue(15);
    printLinkList();
    printf("\n");
    dequeue();
    printf("\n");
    printLinkList();
    printf("\n");
    dequeue();
    printf("\n");
    printLinkList();
    printf("\n");
    enqueue(15);
    printLinkList();
    printf("\n");
    printf("\n");
    dequeue();dequeue();dequeue();dequeue();
    return 0;
}