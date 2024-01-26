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




node* reverse(node*head){

node*temp = NULL ;  
node*temp2 = NULL ;
while(head!=NULL){
temp2 = head -> link ; 
head -> link = temp ; 
temp = head ; 
head = temp2 ; 
}
head = temp ; 

return head ; 

}






int main (void){

int num   ;
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
temp = head ; 
head = reverse(temp) ; 
temp = head ; 
display(temp) ; 
}