#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data ; 
    struct node *link ; 

}node; 


void fun (int num , node*temp,node*current ) {
current = malloc(sizeof(node)) ; 
printf("Enter the data for node %d :",num+3) ; 
scanf("%d",&(current->data)) ; 
current->link = NULL; 
temp->link->link = current ; 


}


int main (void){
    int num ; 
    node*head ; 
    node*current ;
    node*temp;  
printf("Enter the number of  nodes :"); scanf("%d",&num) ;
printf("The number is : %d\n",num) ; 
head  = malloc(sizeof(node)) ;// creating the head node
 printf("Enter the data of node 1 :" ) ;  scanf("%d",&(head->data) ) ; 
 head->link = NULL ; 

 current = malloc(sizeof(node)) ; //creating the second node
 printf("Enter the data of node 2 :" ) ;  scanf("%d",&(current->data)) ;
 current->link = NULL ; 
 head-> link = current ; 
 temp = head ; 
 for(int i =0 ; i<num-2 ; i++){
  fun(i,temp,current) ;// creating n nodes
  temp  =temp->link ;  
 }
 temp =head ; 
for(int i =0 ; i<num ;i++){
    printf("The data in the node %d is %d \n",i+1,temp->data) ;  //displaying the nodes 
    temp= temp -> link ; 
     
}
}