#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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


void palidrome(node*head){
char str1[20]={0},str2[20]={0} ; 
int count =0 ;  
node*temp = head ; 
node*temp2 = head ;
int arr[20],arr2[20] ; 
int i =0 ; 
if(temp == NULL||temp ->link ==NULL)return  ; 
else {
while(temp !=NULL){
    temp = temp ->link ; 
    count ++; 
}
for(int i =0 ;i<count/2;i++){
    arr2[i]=temp2 ->data ; 
    temp2 = temp2->link ; 
}
temp = temp2 ; 
while(temp !=NULL){
    arr[i]= temp ->data ; 
    temp = temp ->link ; 
    i++ ; 
}

    



}
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
palidrome(head) ; 


}