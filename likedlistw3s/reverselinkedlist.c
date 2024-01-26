#include<stdio.h>
#include<stdlib.h>



typedef struct node{
     int data ; 
     struct node*link ; 
}node ; 



void create_list(node*head,int num ) {
node*current  ;
node*temp = head ; 
printf("Enter the data of the node 1 : "); 
scanf("%d",&(head ->data) ) ; 
for(int i =0 ; i<num ;  i++){
current = malloc (sizeof(node)) ; 
printf("Enter the data of the node %d :",i+2) ; 
scanf("%d",&(current -> data)) ; 
current -> link = NULL   ; 
temp ->link = current ; 
temp = temp -> link ; 
}


}


void display(node*head ,int num){
    node*temp = head ; 




}








int main(void){
int num ; 
printf("Enter the number of  nodes :");
scanf("%d",&num) ; 
node*head = malloc(sizeof(node)) ;
head -> link = NULL ; 
create_list(head, num ) ; 
node*temp = head ; 
display(temp,num ) ; 




}