#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data ; 
    struct node*link ; 
}node; 



node* insert(node*head , node*current){
current= malloc(sizeof(node)) ; 
printf("Enter the data of the inserted node : ") ; 
scanf("%d",&(current->data));
current-> link = NULL ; 
head -> link -> link = current ;  
return current ; 
}

void display (node*temp) {
int count =0 ; 
while(temp!= NULL ){
    count ++ ; 
    printf("The data of node %d is : %d\n",count , temp->data) ; 
    temp = temp -> link ; 
}





}





int main(void){
node*head = malloc(sizeof(node)) ; 
printf("Enter the data of the first node : ") ;
scanf("%d",&(head->data)); 
head ->link =NULL ; 

node*current = malloc (sizeof(node)) ; 
printf("Enter the data of the second node : ") ; 
scanf("%d",&(current->data));
current-> link = NULL; 
head -> link = current ; 

current = insert(head,current) ; 
node*temp = head ; 
display (temp) ; 





}