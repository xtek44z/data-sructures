#include<stdio.h>
#include<stdlib.h>




typedef struct node { 
    int data ; 
    struct node *link ; 
}node ; 

void create_list(int i , node*head){

node*current = malloc(sizeof(node)) ; 
printf("Enter the data for the node %d : ",i+2) ; 
scanf("%d",&(current->data)) ; 
current -> link = NULL; 
head->link = current ; 
head = head -> link ;

}





void display(node*temp){
int count =0 ; 
while(temp!=NULL){
count ++ ; 
printf("The data of the node %d is : %d\n",count , temp -> data) ; 
temp= temp->link ; 
}
}



void insert(node*temp,int input ,int position){
node*dash; 
node*current = malloc(sizeof(node)) ; 
current ->data = input ; 
current ->link = NULL ; 
for(int i =0 ; i<position-1 ;i++){
    temp = temp -> link ; 
    }
dash=temp -> link ; 
temp -> link = current ;
current->link= dash ;



}


int main (void){

int num,input, position  ;
printf("How many nodes are going to be ? ") ;
scanf("%d",&num); 

node*head = malloc(sizeof(node)) ; 
printf("Enter the data of the first node :") ; 
scanf("%d",&(head->data)) ; 
head ->link = NULL ;
node*temp= head ;
for(int i =0 ; i<num-1 ;i++){
   create_list(i, temp) ;
    temp = temp -> link ;  
}
temp= head ;

printf(" Input data to insert in the middle of the list :"); 
scanf("%d",&input); 
printf(" Input the position to insert new node :") ; 
scanf("%d",&position) ; 
temp= head ; 
insert(temp,input,position);
display(temp) ; 




}