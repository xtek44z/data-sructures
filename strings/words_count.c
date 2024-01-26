#include<stdio.h>
#include<string.h>



void words_count(char str[] ,int*count ){
    int i =0 ; 
    while(str[i]!='\0'){
        if(str[i]==' '){
            *count = *count +1 ; 
        }
        i++ ; 
    }
}





int main (void){
char str[100] ; int count =0 ; 
gets(str) ; 
words_count(str,&count ) ; 
printf("The words count is %d",count) ; 





}