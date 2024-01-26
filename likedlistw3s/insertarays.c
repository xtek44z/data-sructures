#include<stdio.h>
#include<stdlib.h>




void insert ( int arr[] , int size,int arrr[] ) {
int num , position ;   
printf("Ente the number you want to insert :"); 
scanf("%d",&num) ; 
printf("Enter the position of this number :"); 
scanf("%d",&position) ;
for(int i =0; i <position ; i++){
arrr[i]=arr[i];
}
arrr[position] = num ; 
for(int i =position+1,y =position ; i<size+1 ; i++,y++){
    arrr[i]=arr[y]; 
}

 

}

void  display(int arr[],int size,int arrr[] ){

for(int i =0 ; i<size ; i++){
   printf("The element %d is : %d\n",i,arr[i]) ; 
}printf("\n") ; 
for(int i =0 ; i<=size ; i++){
   printf("The result element  %d is : %d\n",i,arrr[i]) ; 
}
}




int main(void){
int arr[]= {4,356,6,78,5,3,34,3} ; 
int size = sizeof(arr)/sizeof(*arr) ; 
int arrr[size + 1]; 
insert(arr,size,arrr) ; 
display(arr,size,arrr); 
return 0 ; 
}