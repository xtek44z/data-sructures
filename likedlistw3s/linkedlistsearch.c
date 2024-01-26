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


void search(node*head , int target,int num  ) {
node*temp = head ; 
int done =0 , count=0 ; 
for(int i =0 ; i<num;i++){
    count ++ ; 
    if(temp->data ==target ){
        done =1 ; 
          break  ;
 }temp = temp ->link ; 
 
}
if(done ==1)printf("Target found in the node %d \n",count) ; 
else printf("Target not found ") ; 








}








int main (void){

int num,target;
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
temp= head ;
display(temp) ; 
printf("What element are you searching for ? : "); 
scanf("%d",&target) ; 
search(head , target,num);



}