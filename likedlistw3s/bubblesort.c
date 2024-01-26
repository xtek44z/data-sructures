
#include<stdio.h>

int main (){
int size, temp ; 
int arr[] = {6,4,4,32,3,4,23,5} ; 

size = sizeof(arr)/sizeof(*arr); 
for(int y=0 ;y<size ; y++){
  for(int i =0 ; i<size ; i++){
   if(arr[y]<arr[i]){
    temp = arr[y];
    arr[y]=arr[i]; 
    arr[i]= temp ; 
   }
  }
}


for(int i =0 ; i<size ;i++){
    printf("%d ",arr[i]) ; 
}









}