#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data; 
    struct node*link ; 
} node ; 


void create_list (node*head , int num){
node*temp = head ; 
node*current; 
head = malloc(sizeof(node));
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


void display (node*head){
int count =0 ; 
while(head !=NULL){
count ++ ; 
printf("The data you entered for node %d is : %d\n",count , head -> data);
head = head -> link ; 
}}



node* sort(node*head,int num ){
int swap ; 
node*temp  = head ; 
node*current = temp->link ; 
for(int y =0 ; y <num ; y++){
            temp = head ; 
            current = temp->link ; 
    for(int i =0 ; i<num-1 ; i++){
        if(temp->data > current->data){
            swap = temp->data ; 
            temp->data = current ->data ; 
            current ->data =swap ; 
        }
            temp = temp -> link ;
            current = current -> link ;
    }
}
return head ; 
}


node* merge (node*head, node*head2,int num){
printf("\nThe num is : %d\n",num) ; 
node*temp = head ;
node*current = head -> link ; 
node*temp2 = head2 ; 
node*current2 = head2->link ; 

for(int i=0 ; i<num ;i++){
    temp->link = head2 ; 
    temp2->link = current ; 
   

    temp2= current2 ; 
    temp = current ; 

    current2 =current2 -> link ; 
    current = current->link ; 

}
current ->link = NULL; 
return head ; 


}







int main (void){
int num1, num2 , num; 
node*head = malloc(sizeof(node)) ;
node*head2 = malloc(sizeof(node)) ;
node*temp2;
printf("How many nodes are going to be in the first linked list ? ") ; 
scanf("%d",&num1) ; 
node*temp  =head ; 
create_list(head ,num1) ; 
temp  =head ; 
display(temp) ; 
temp = head2 ; 
printf("How many nodes are going to be in the second linked list ? ") ; 
scanf("%d",&num2) ;
create_list(temp,num2) ; 
temp = head2 ; 
display(temp ) ; 
temp=head ; 
head= sort(temp,num1) ;
temp=head; 
printf("\nThe sorted version of the first linked list is : \n"); 
display(temp) ; 
temp =head2 ; 
head2=sort(temp,num2) ; 
temp =head2 ; 
printf("\nThe sorted version of the second linked list is : \n"); 
display(temp) ; 
if(num1>num2)num =num2; 
else num = num1; 
temp = head ; 
temp2 = head2 ; 
head = merge(temp, temp2 ,num)  ; 
temp = head ; 
display(temp) ; 
}


