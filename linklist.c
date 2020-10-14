#include<stdio.h> 
#include<stdlib.h> 
struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* currNode = NULL;

void add(int num){
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
        currNode=newNode;
    }
}

void insert(int num, int index){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;
    struct node* previous = NULL;
    int count = 1;
    //to traverse to index
    while(temp!=NULL && count!=index ){
            previous=temp;
            temp=temp->next;
            count++;
    }
    
    if(count==index){
       if(count==1){
            newNode->next=temp;
            newNode->data=num;
            head=newNode;
        }
        else{
            newNode->next=previous->next;
            newNode->data=num;
            previous->next=newNode;
        }
    }

}

void deleteFromPosition(int index){
    struct node* temp = head;
    struct node* previous = NULL;
    int count = 1;
    while(temp!=NULL && count!=index ){
            previous=temp;
            temp=temp->next;
            count++;
    }
    
    if(count==index){
       if(count==1){
            head=head->next;
        }
        else{
            previous->next=temp->next;
        }
    }
}

void printLinkList(){
    struct node* printNode = head;
    while(printNode != NULL){
        printf(" %d",printNode->data);
        printNode = printNode->next;
    }
    printf("\n");
}

int main(){
    add(5);
    add(10);
    // printLinkList();
    add(15);
    // printLinkList();
    // insert(3,4);
    printLinkList();
    deleteFromPosition(1);
    printLinkList();
    return 0;
}