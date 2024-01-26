#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data ; 
    struct node *link ; 
}node ; 



node* sort(node*head , node*head2){


node*temp = head ; 
node*temp2 = head2 ; 
node*current =head->link ; 
node*current2 = head2->link ;

temp2 -> link = temp->link ; 
temp->link = temp2 ;
temp= temp -> link ; 
current = current -> link ; 
temp -> link = current2 ; 
current2 = current2 -> link ; 
temp = temp->link ; 
temp -> link = current ;
current -> link = current2 ; 
return head ; 
}





void display(node*head){

int count =0 ; 
while(head!=NULL){
    count ++ ; 
    printf("The data of the node %d is : %d\n",count , head->data) ; 
    head = head -> link ; 
}


}








int main (){
//creating the first linked list // 
node*head = malloc(sizeof(node)) ; 
head->data = 1 ; 
head -> link = NULL ;

node*current = malloc(sizeof(node)) ; 
current ->data = 3 ; 
current -> link = NULL ; 
head -> link = current ;

current = malloc(sizeof(node)) ; 
current ->data = 5 ; 
current -> link = NULL ; 
head -> link -> link= current ;

//creating the second linked list // 

node*head2 = malloc(sizeof(node)) ; 
head2->data = 2 ; 
head2-> link = NULL ;

node*current2 = malloc(sizeof(node)) ; 
current2 ->data = 4 ; 
current2 -> link = NULL ; 
head2 -> link = current2 ;

current2 = malloc(sizeof(node)) ; 
current2 ->data = 6; 
current2 -> link = NULL ; 
head2 -> link -> link= current2 ;


head = sort(head,head2) ; 
node*temp = head ; 
display(temp) ; 


}