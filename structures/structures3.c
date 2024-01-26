#include<stdio.h> 



typedef struct date_t {
    char month[10] ; 
    int day , year ; 

}date_t; 


int main(){

date_t today ; 
printf("Enter the day : ") ; 
scanf("%d",&today.day)  ; 
printf("Enter the year :")  ; 
scanf("%d",&today.year) ; 
printf("Enter the month :") ; 
scanf("%s",today.month) ; 
printf("%d-%s-%d ",today.day,today.month,today.year) ; 

}