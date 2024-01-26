#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node*link ; 

}node ; 

void create_list (node*head , int num){
node*temp = head ; 
node*current; 
printf("Enter the data if the first node : "); 
scanf("%d",&(temp -> data) ) ;
head -> link = NULL ; 
for(int i =0 ; i<num-1 ;i++){
current = malloc(sizeof(node)) ; 
printf("Enter the data for the node %d :",i+2) ; 
scanf("%d",&(current->data)) ;
current -> link = NULL ; 
temp -> link = current ;  
current = current->link ;
temp = temp -> link ; 
}
}

void display(node*temp){
int count =0 ; 
while(temp!=NULL){
count ++ ; 
printf("The data of the node %d is : %d\n",count , temp -> data) ; 
temp= temp->link ; 
}
}





void convert(node*head,int num ){
node*temp  =head ; 
int seen [1000]={0}  ; 
for(int i =0 ; i<num ;i++){
    seen[temp->data] += 1  ;  
    temp= temp -> link ; 
}
for(int i =0; i<1000 ;i++){
    if(seen[i]>1){
        printf("The number %d is repeated %d times  \n",i,seen[i]); 
    }

}
 
}


int main (){
int num ;

node*head=malloc(sizeof(node)) ; 
printf("Enter the number of nodes : ");
scanf("%d",&num) ; 
create_list(head,num) ; 
node*temp = head; 
display(temp) ; 
temp = head ; 
convert(head,num) ; 


}