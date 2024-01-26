#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node*link ; 
}node;


void delete(node*head,int position  ){
    node*chmata= head ; 
    node*temp ; 
 for(int i = 0; i<position-1;i++){
   head= head->link ; 
}
temp = head -> link  ;
position = position -2 ; 
for(int i =0 ; i<position ; i++){
  chmata = chmata -> link ; 
}
chmata ->link = temp ; 
}

void display (node*head ){
int count =0 ; 
while(head!=NULL){
    count ++ ; 
    printf("The data of node %d is %d .\n",count,head->data); 
    head = head->link; 
}


}



int main (void){
int num ; 
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
display(head) ; 
printf("Enter the position of the node you want to delete :");
scanf("%d",&num) ; 
 delete(head,num ) ; 
display(head) ; 
}