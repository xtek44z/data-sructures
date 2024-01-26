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
printf("The linked list is : \n") ; 
while(head !=NULL ){
 printf("%d ",head ->data) ; 
 head = head -> link ; 
}
printf("\n") ; 
}

node*merge_sorted(node*head,node*head2 ){
node*new ; 
node*lwl = head ; 
node*tani = head2 ;
node*sorting ; 
    if (lwl ==NULL ) return tani ; 
    else if (tani ==NULL )return lwl ; 
if(lwl ->data < tani ->data){
    sorting = lwl ; 
    lwl = sorting ->link ; 
}else if (lwl ->data >tani ->data ){
    sorting = tani ; 
    tani = sorting ->link ; 
}
new = sorting ; 
while (lwl&&tani ){

if(lwl->data < tani ->data ){
    sorting -> link = lwl ; 
    sorting = lwl; 
    lwl =  sorting ->link ; 
}
else if(lwl->data >tani ->data ){
    sorting ->link = tani ; 
    sorting = tani ; 
    tani = sorting->link  ;  
}
if(tani==NULL )sorting ->link = lwl ; 
else if(lwl==NULL )sorting ->link = tani ; 


}
return new ; 

}






int main(void){
node*head = malloc(sizeof(node)) ; 
node*head2 = malloc(sizeof(node)) ; 
head ->link = NULL ; 
node*temp = head ; 
head = create_list(temp) ; 
temp =head2 ; 
head2 = create_list(temp)  ; 

temp =head ; 
display(temp) ; 
temp = head2 ; 
display(temp) ; 
head = merge_sorted(head , head2 );
temp=head ; 
display(temp);



}