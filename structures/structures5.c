#include<stdio.h>
#include<string.h>





typedef struct   {
int num , denom ; 
}fraction ; 





fraction prod(fraction num1 , fraction num2){

fraction result ; 
result.num = num1.num  *num2.num ;
result.denom = num1.denom  *num2.denom ;
return result ; 

}

int main (){
fraction result ;
fraction num1 ,num2 ; 
printf("Enter the first fraction :")  ; 
scanf("%d %d",&num1.num ,&num1.denom) ; 
printf("Enter the second fraction :")  ; 
scanf("%d %d",&num2.num ,&num2.denom) ;  
result = prod(num1 , num2 );
printf("The result of %d/%d * %d/%d is : %d/%d",num1.num,num1.denom,num2.num,num2.denom, result.num,result.denom ) ; 




}