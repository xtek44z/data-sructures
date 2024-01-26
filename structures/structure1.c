#include<stdio.h>
#include<string.h>

typedef struct car {
    int id  ; 
    char model [100];  
    int rental_rate ; 
}car; 






int main (){
car car1   = {3423,"ferrari",10000} ; 
car car2   = {2342,"lamborghini",15000}  ; 
car car3   = {4564,"buggati",20000} ; 
char choice[100] ; int days ,total ; 
printf("The cars availabale are : \n") ; 
printf("CAR 1     id :%d ,model :%s ,price :%d \n",car1.id, car1.model,car1.rental_rate) ; 
printf("CAR 2     id :%d ,model :%s ,price :%d \n",car2.id, car2.model,car2.rental_rate)  ; 
printf("CAR 3     id :%d ,model :%s ,price :%d \n",car3.id, car3.model,car3.rental_rate) ; 
printf("Enter the model : ") ; 
gets(choice); 
printf("Enter the number of days :");scanf("%d",&days); 
if(strcmp(choice,car1.model)==0){
total = car1.rental_rate *days ; 
}
else if(strcmp(choice,car2.model)==0){
total = car1.rental_rate *days ; 
}
else if (strcmp(choice,car3.model)==0){
total = car1.rental_rate *days; 
}
else {
    printf("model not found !") ; 
}
printf("The total price is : %d ",total) ; 
}