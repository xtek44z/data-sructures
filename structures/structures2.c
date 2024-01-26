#include<stdio.h>
#include<string.h>
 typedef struct {
    char name [30] ; 
    int  number ; 
   

}telephone ; 




int main (void){
 telephone index ;  
printf("Enter the name :") ; 
gets(index.name) ; 
printf("Enter the number :") ;  
scanf("%d",&index.number) ; 
printf("The user name is :%s\n The number is : %d",index.name,index.number) ; 



}