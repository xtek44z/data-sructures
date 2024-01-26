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


node *sort(node*head,int num ){


node*temp= head ; 
node*current ; 
int swap ; 
for(int y =0 ; y<num ; y++){
    temp =head ; 
    current = temp->link;
    for(int i =0 ; i<num-1; i++){
    if(temp->data > current->data){
        swap= temp->data ; 
        temp ->data= current ->data ; 
        current->data = swap ;
    }
    current =current ->link ; 
    temp =temp ->link ; 
    }
    
}




return head ; 

}








int main (void){

int num;
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
temp =head;
head = sort(temp,num) ; 
display(head) ; 


}