#include<stdio.h>
#define max 20

int index = -1 ;




void push(int stack[]){

index ++; 
printf("Please enter the data to push  : ") ;
scanf("%d",&stack[index]) ; 
}

void choice (int *feedback){
    printf("Do you want to push again ?(1 to confirm)(else to decline )") ; 
    scanf("%d",feedback) ; 
}





int main (void){
int feedback = 0 ; 
int stack[10]= {0} ; 
do{
    push(stack) ; 
    choice(&feedback) ; 
}while(feedback==1&&index<10) ; 
for(int i =0 ;i<=index ; i++){
    printf("%d ",stack[i]) ; 
}







}