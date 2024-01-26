#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data ; 
    struct node *link ; 
}node ; 





void fun (node* head ){
int count = 0 ; 
if(head ==NULL){
    printf("No nodes ");
}
node*p = head ; 
while(p!=NULL){
    printf("The data for node %d is %d \n",count+1,p->data) ;
     p = p -> link ; 
    count ++ ;  
}
printf("The count is : %d",count ) ; 
}

/*void add(node *head ){
node*p = head ; 
node*temp = malloc(sizeof(node)) ; 
temp ->data = 45 ;
temp ->link = NULL ; 

while(p->link != NULL ){
    p = p->link ; 
}
p->link = temp ; 



}*/

void add_start(node**head ){
node*current ; 
current  =malloc(sizeof(node)) ; 
current->data = 80 ; 
current ->link = *head; 
*head = current ; 




}




int main (){
    //CREATING THE FIRST NODE 
node *head = (node*)malloc(sizeof(node)) ; 
head->data = 45 ; 
head->link =NULL ; 

node *current = (node*)malloc(sizeof(node)) ; 
current->data =67 ; 
current ->link =NULL ; 
head->link = current ; 

current = malloc(sizeof(node)) ; 
current->data =90 ; 
current->link = NULL ; 
head ->link-> link = current ; 

current = malloc(sizeof(node)) ; 
current-> data = 37 ; 
current ->link = NULL ; 
head -> link -> link -> link = current ; 

add_start(&head) ;
fun(head) ; 





}

