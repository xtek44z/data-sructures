#include<stdio.h>
#include<stdlib.h>


int * fun(int *nums,int numsSize ,int target , int *returnSize){
    returnSize = malloc(2*sizeof(int)) ; 
    for(int index =0; index <numsSize ;index ++){
        for(int y =0 ; y<numsSize ; y++){
         if(nums[index]+nums[y]==target ){
              returnSize[0]=index ; 
              returnSize[1]=y ; 
         }
      
    }
    }
    
  return returnSize ; 
}



int main (void){
    int count =2 ; 
   int nums[3] = {3,2,4} ;
   int returnSize[2] ;  
   int *p = returnSize ; 
p = fun(nums,3,6,returnSize); 
printf("[");
while(count > 0 ){
    printf("%d ",*p) ; 
    p++ ; 
    count-- ; 
}printf("]") ; 
}

