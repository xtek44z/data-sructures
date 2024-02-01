#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data ; 
    struct node*next ; 
}node;



node*create_node(){

node*head  = malloc(sizeof(node)) ; 
head ->data =45 ;
head ->next = head ;
return head; 
}








int main(){

node*head = create_node(); 
printf("%d %d %d",head->data ,head -> next ,head ) ; 
}