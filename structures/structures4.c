#include<stdio.h>
#include<string.h>





typedef struct   {
int num , denom ; 
}fraction ; 





float prod(fraction num1 , fraction num2){

float result1,result2 ; 
result1 =((float)num1.num/(float)num1.denom) ;
printf("%f\n",result1) ;  
result2 =((float)num2.num/(float)num2.denom) ;
printf("%f",result2) ;   
return result1 * result2 ; 


}

int main (){
float result ;
fraction num1 ,num2 ; 
printf("Enter the first fraction :")  ; 
scanf("%d %d",&num1.num ,&num1.denom) ; 
printf("%d/%d\n",num1.num,num1.denom) ; 
printf("Enter the second fraction :")  ; 
scanf("%d %d",&num2.num ,&num2.denom) ; 
printf("%d/%d",num2.num,num2.denom) ; 
result = prod(num1 , num2 );
printf("The result is : %f",result ) ; 




}