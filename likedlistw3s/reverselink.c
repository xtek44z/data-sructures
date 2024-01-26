#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node *link ;
}node ; 



void create_list(int i , node*head){

node*current = malloc(sizeof(node)) ; 
printf("Enter the data for the node %d : ",i) ; 
scanf("%d",&(current->data)) ; 
current -> link = NULL; 
head->link = current ; 
head = head -> link ;

}

void display (node*head){
int count =0 ; 
while(head !=NULL){
count ++ ; 
printf("The data you entered for node %d is : %d\n",count , head -> data);
head = head -> link ; 
}}





node* reverse(node*head){
node*temp = head ->link ; 
node*prev = head ; 
node*bd = temp ->link ; 
head ->link = NULL ; 
while(temp->link!=NULL){
    temp->link = prev ; 
    prev = temp ; 
    temp= bd ; 
    bd = bd ->link ; 
}
head = temp ; 
return head ; 

}

int main (){
int num = 2 ; 
node*head = malloc(sizeof(node)) ; 
printf("Enter the data for the node 1 : ") ; 
scanf("%d",&(head->data)) ; 
head -> link  = NULL ; 
node*temp = head ; 
create_list(num , temp ) ; 
num ++ ; 
temp = temp -> link ;
 create_list(num,temp ) ; 
num++;

temp = head ; 
reverse(temp) ; 
temp =head ; 
display(temp) ; 
}