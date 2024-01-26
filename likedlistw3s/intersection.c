#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data ; 
    struct node *link ;
}node ; 



void create_list(node*head , node*head2, int num ){
printf("LINKED LIST 1 : \n") ; 
printf("Enter the data of the head : " ); 
scanf ("%d",&(head->data) ) ;head->link = NULL ;  
node*temp = head ; 
for(int i =0 ; i<num-1 ; i++){node*current = malloc (sizeof(node)) ;
printf("Enter the data for the node %d :",i+2) ; 
scanf("%d",&(current->data)) ; 
current ->link = NULL ;
temp->link = current ;
temp = temp -> link ;
  
}

printf("\nLINKED LIST 2 : \n") ;
printf("Enter the data of the first head (list 2 )" ); 
scanf("%d",&(head2->data)) ; head2 -> link = NULL ; 
temp = head2 ; 
for(int i =0 ; i<num-1 ; i++){
node*current2 = malloc (sizeof(node)) ; 
printf("Enter the data for the node %d :",i+2) ; 
scanf("%d",&(current2->data)) ; 
current2 ->link = NULL;
temp->link = current2 ;
temp = temp -> link ;

 
}

}


void display (node*head ,int num ){
    printf("\n") ; 
int count =0 ; 
while(head !=NULL ){

count ++ ; 
printf("(list %d ) The data you enterd for node %d is : %d \n",num , count , head -> data) ; 
head = head -> link  ; 
}
}



void intersection(node*head , node*head2, int num  ){
    node*temp = head ; 
    node*temp2 = head2 ; 
for(int i =0 ; i< num  ;i++){
    temp2 = head2 ;
for(int y =0 ; y<num ; y++){
    if(temp->data  == temp2->data ) {
        printf("The number %d is an intersection . \n",temp ->data) ; 
    }
temp2 = temp2 ->link ; 

}
temp = temp -> link ; 
}







}




int main (void){
int num ; node*temp ;node*temp2;  
printf("How many nodes are going to be ? ") ; 
scanf("%d",&num) ; 
node*head = malloc (sizeof(node)) ; 
node*head2 = malloc (sizeof(node)) ; 
create_list(head, head2,num) ; 
temp = head ; 
display(temp,1) ; 
temp2  = head2 ; 
display(temp2,2) ; 
intersection(temp ,temp2, num ) ;
}