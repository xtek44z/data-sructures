#include<stdio.h>
#include<string.h>



int main(void){

char str[100] ; 
char*temp = str ; 
printf("Enter the string here : ") ; 
gets(str) ; 
while (*temp!='\0'){
    if(*temp==' '){
        *temp = '/' ; 
    }
    temp++ ; 
}
puts(str) ; 







}
