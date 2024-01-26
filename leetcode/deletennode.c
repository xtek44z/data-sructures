#include<stdio.h>
#include<stdlib.h>



typedef struct node {
    int data ; 
    struct node *link ; 
} node ; 


node*create_list(node*head ){
int num ; 
node*current ; 
node *temp =head ; 
printf("How many nodes are going to be ?"  ) ; 
scanf("%d",&num ) ; 
printf("Enter the data of the node 1 :") ; 
scanf("%d",&(head ->data)) ; 
for(int i =0 ; i<num-1 ; i++){

current  = malloc(sizeof(node))  ; 
printf("Enter the data of the node %d :",i+2)  ; 
scanf("%d" ,&(current ->data)) ; 
current ->link = NULL ; 
temp -> link = current ; 
temp = temp ->link ; 

}
return head; 
}


void display(node*head){
int count =0 ; 
while(head !=NULL ){
    count ++ ; 
    printf("The data you entered for node %d is : %d \n",count,head ->data ) ; 
    head = head ->link ; 
}
}

node*remove_nth_node(node*head,int num ) {
    node*temp = head ; 
    node*current ; 
    for(int i =0 ; i<num ;i++){
  temp = temp -> link ; 
    }
    current = temp->link ; 
temp ->link = current ->link ; 
free(current) ; 

return head ; 



}



int main(void){
int num =2 ;
node*head = malloc(sizeof(node)) ; 
head ->link = NULL ; 
node*temp = head ; 
head = create_list(temp) ; 
temp =head ; 
display(temp) ; 
head = remove_nth_node(temp, num ) ; 
temp = head ; 
display(temp) ; 


}