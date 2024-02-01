#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data ; 
    struct node*next ; 
}node; 


node*create_list(){
    
    int num ; 
    node*tail ,*new; 
    printf("How many nodes are going to be : "); 
    scanf("%d",&num ) ; 
    tail = malloc(sizeof(node)) ; 
    tail -> next = tail ; 
    printf("Enter the data of node 1:");
    scanf("%d",&(tail->data)) ;
    for(int i =0 ; i<num-1 ; i++){
        new = malloc(sizeof(node)) ; 
        new -> next = NULL ; 
        printf("Enter the data of the node %d:",i+2) ;
        scanf("%d",&(new->data)); 
        new -> next  = tail->next ; 
        tail -> next = new ; 
        tail = new ; 
}
return tail; 
}



void display(node*tail){
    node*temp = tail->next ; 
    do{
        printf("%d ",temp ->data) ; 
        temp = temp -> next ; 
    }while(temp!=tail->next) ; 
}




int main (void){

node*tail = create_list() ; 
node*temp = tail ; 
display(temp) ; 


}