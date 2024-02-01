#include<stdio.h>
#include<stdlib.h>

#define max 5

int top = -1 ;




void push(int stack[]){
if(top<max -1 ){
   top ++; 
printf("Please enter the data to push  : ") ;
scanf("%d",&stack[top]) ; 
}
else {
     printf("Stack overflow !") ; 
     exit(1) ; 
}

}

void choice (int *feedback){
    printf("Continue ? (1 to confirm)(else to decline )") ; 
    scanf("%d",feedback) ; 
}


void pop(){
if(top>=0 ){
   top -- ;  
}
else {
    printf("Stack underflow !") ; 
    exit(1) ; 
}
}




int main (void){
int feedback = 0 ; 
int stack[max]= {0} ; 
do{
    push(stack) ; 
    choice(&feedback) ; 
}while(feedback==1&&top<10) ; 
for(int i =0 ;i<=top ; i++){
    printf("%d ",stack[i]) ; 
}
do{
    pop() ; 
    choice(&feedback) ; 
}while(feedback==1&&top>-1) ; 

for(int i =0 ;i<=top ; i++){
    printf("%d ",stack[i]) ; 
}





}