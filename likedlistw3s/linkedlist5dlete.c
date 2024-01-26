#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node*link ; 
}node;


node* delete(node*head ){
node*temp= head ; 
head = head -> link ; 
temp ->link = NULL ; 
return head ; 
}


void display (node*head ){
int count =0 ; 
while(head!=NULL){
    count ++ ; 
    printf("The data of node %d is %d .\n",count,head->data); 
    head = head->link; 
}


}



int main (void){

node *head; node*current ; 
head = malloc(sizeof(node)) ; 
head -> data = 45 ;
head -> link = NULL ; 

current = malloc(sizeof(node)) ; 
current-> data = 78 ; 
current ->link = NULL; 
head->link = current ; 

current = malloc(sizeof(node)) ; 
current-> data = 9 ; 
current ->link = NULL; 
head ->link -> link = current ; 

current = malloc(sizeof(node)) ; 
current-> data = 90 ; 
current ->link = NULL; 
head ->link -> link ->link = current ;
head = delete(head ) ; 
display(head) ; 
}