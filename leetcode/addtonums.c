#include<stdio.h>
#include<stdlib.h>




typedef struct node {
    int data ; 
    struct node *link ; 
} node ; 



node*add_sum(node*head,node*head2 ) {
int rest= 0  ; 
node*temp = head ; 
node*temp2 = head2 ; 
node*head3  = malloc(sizeof(node)) ; 
node *temp3 = head3 ;
node*current3 ; 
node*previous = head3 ; 
for(int i =0 ; i<3 ; i++){
    previous = temp3 ; 
current3 = malloc(sizeof(node)) ; 
current3 -> link = NULL ; 
temp3 -> link = current3 ; 
temp3->data = temp->data + temp2 ->data + rest  ; 
rest =0 ; 
if(temp3 ->data >9 ){temp3->data = 0 ; rest += 1; }

temp = temp -> link; 
temp2 = temp2->link;
temp3 = temp3 -> link ;
current3 = current3 -> link ;   
}
temp3 = previous   ; 
free(current3) ; 
temp3 -> link = NULL ;
temp3 = head3 ; 
temp = head ; 
return head3 ; 
}


void display(node*head){

    int count =0 ;
    while(head !=NULL){
        count ++ ; 
        printf("The data of the node %d is : %d\n",count ,head -> data) ;
        head = head ->link ; 

    }
}


node* reverse (node*head){

node*temp= NULL   ;
node *current ; 
while(head != NULL){
current = head -> link ; 
head -> link = temp ; 
temp = head ; 
head = current ; 
}
head = temp ; 

return  head ; 
}


void sum(node*head){
    while (head != NULL){
        printf("%d",head ->data) ;
        head = head -> link ; 
    }
}




int main (void){
node *result  ; 
node*temp ; 
node *head = malloc (sizeof(node )) ; 
head -> link = NULL ; 
head ->data = 2 ; 
node*current = malloc (sizeof(node)) ; 
current -> link = NULL ;
current -> data = 4 ;
head -> link  =current ; 
current = malloc (sizeof(node)) ; 
current -> link = NULL ;
current -> data = 3 ; 
head -> link -> link = current ; 


node *head2= malloc (sizeof(node )) ; 
head2 -> link = NULL ; 
head2 ->data = 5 ; 
node*current2 = malloc (sizeof(node)) ; 
current2 -> link = NULL ;
current2 -> data = 6 ;
head2 -> link  =current2 ; 
current2 = malloc (sizeof(node)) ; 
current2 -> link = NULL ;
current2 -> data = 4 ; 
head2 -> link -> link = current2 ; 

result = add_sum (head,head2 )  ; 
temp = result  ; 
display(temp) ; 
temp= result ; 
result = reverse(temp) ; 
temp = result ; 
printf("\nThe sum is : "); 
sum(temp); 
}

