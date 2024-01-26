#include<stdio.h>




int words_count(char s[]){
int i =0 ; 
int count =-1 ; 
char *ptr = s ; 
while(s[i]!='\0'){
ptr ++; 
i++  ; 
}
while(*ptr !=' ') {
    ptr --; 
    count ++ ; 
}


return count  ; 



}





int main (){
int length ; 
char s[20] = "a " ; 
length = words_count(s) ; 
printf("The length is : %d",length); 





}