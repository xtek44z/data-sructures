#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node*link ; 
}node ; 



void create_list(node*head ,int num ) {
node*current ; 
printf("Enter the data of the node 1 : ") ; 
scanf("%d",&(head ->data)) ; 
for(int i =0 ; i<num-1 ; i++){
current = malloc (sizeof(node)) ; 
printf("Enter the data of the node %d : ",i+2) ; 
scanf("%d",&(current ->data)) ; 
current -> link = NULL ; 
head -> link  =current ; 
head = head -> link ; 
}
}

void display(node*head ) {
int count = 0 ; 
while(head !=NULL ){
    count ++ ; 
printf("The data you entered for node %d is : %d\n",count,head -> data) ;
head = head -> link ; 
}
}


node *reverse_specified(node*head,int num){
int size , count = 0 ; node*temp =head ;
node*end= temp  ; 
node *current= temp ->link  ;  
printf("Enter the size of the group :") ; 
scanf("%d",&size) ; 
if(size<num) {
for(int i =0  ; i<size ; i++){
end = end -> link ; 
}
while(count!=size-1){
temp -> link = current -> link ; 
current ->link = head ; 
head = current ;

current = temp -> link ; 
count++;
}
}
else {
printf("size is bigger than the linked list ") ;} 

return head ; 





}


int main (void){
int num ; 
printf("How many nodes are going to be ? ") ; 
scanf("%d",&num) ; 
node *head = malloc(sizeof(node))  ;
node*temp = head ; 
head -> link = NULL ;
create_list(temp, num) ; 
temp = head ; 
display(temp); 
temp = head ; 
head = reverse_specified(temp,num) ; 
temp = head ; 
display(temp) ; 


}