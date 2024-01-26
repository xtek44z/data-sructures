// coded for inseting a new node at the begining od the linked list // 



#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data ; 
    struct node *link ; 
}node; 


node* insert (node*head) {

node*current = malloc(sizeof(node)) ; 
current ->data = 99 ; 
current ->link = head ; 
head = current ;
return head ; 

}

void display(node*head){
int count =0 ; 
    while(head!=0) {
        count ++  ; 
        printf("The data of the node %d is %d \n",count ,head->data  );
        head  = head -> link ; 
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

node*temp = head  ; 
head = insert(temp ) ; 
display(head ) ; 
}