#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node*link ; 
}node;


void display (node*head ){
int count =0 ; 
while(head!=NULL){
    count ++ ; 
    printf("The data of node %d is %d .\n",count,head->data); 
    head = head->link; 
}}




node*  delete(node*head,int position ){
    
    node*temp = head ; 
for(int i =1; i<position-1 ;i++){
    temp = temp->link  ;
}
temp ->link = NULL ;
return head ; 


}






int main (void){
node*temp ; 
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
temp = head ; 
head = delete(temp,4 ) ; 
display(head) ; 
}