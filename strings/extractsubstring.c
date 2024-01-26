#include<stdio.h>
#include<string.h>






int main (void){
int length, start ,end  ; 
char str [100] ; 
char result[100] ; 
printf("Enter the string here : ")  ; 
gets(str) ; 
length = strlen(str) ; 
printf("Enter the starting point :") ; 
scanf("%d",&start) ; 
printf("Enter the ending point : ") ; 
scanf("%d",&end) ; 
for(int i = start , y=0; i!=end ; i++,y++)
{
result[y] = str[i] ; 
}
printf("The substring is : %s ",result) ; 




}




