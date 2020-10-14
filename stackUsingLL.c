//FILO
#include<stdio.h> 
#include<stdlib.h> 

struct node
{
    int data;
    struct node* next;
    struct node* previous;
};

struct node* head = NULL;
struct node* currNode = NULL;
struct node* old = NULL;

void push(int num){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        newNode->data = num;
        newNode->next = NULL;
        newNode->previous= NULL;
        head = newNode;
        currNode=newNode;
    }
    else{
        currNode->next =newNode;
        newNode->data = num;
        newNode->next=NULL;
        newNode->previous=currNode;
        currNode=newNode;
    }
}

void pop(){
    if(head!=NULL){
    //if(currNode->next == NULL || currNode->previous==NULL){
        if(currNode->next == NULL && currNode->previous!= NULL){
            printf("Popped %d",currNode->data);
            currNode=currNode->previous;
            currNode->next=NULL;
        }
        else if(head->next == NULL){
            printf("Popped %d",head->data);
                head=NULL;
        } 
    }
    
    else{
        printf("Stack is empty");
    }
    
}

void top(){
    if(currNode->next == NULL){
        printf("TOP = %d",currNode->data);
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

int main (){
     push(1);
     push(2);
    // printLinkList();
    // printf("\n");
    // pop();
    // printf("\n");
    // printLinkList();
    // printf("\n");
    // top();
    // printf("\n");
    // push(3);
    // printLinkList();
    // printf("\n");
    // pop();
    // printf("\n");
    // printLinkList();
    // printf("\n");
    // top();
    // printf("\n");
    // pop();
    // printf("\n");
    printLinkList();
    printf("\n");
    pop();
    pop();
    pop();
    pop();
    printf("\n");
}
