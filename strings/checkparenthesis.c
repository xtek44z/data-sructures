#include<stdio.h>
#include<string.h>




int main (){
char str[100] ; int length ; 

gets(str) ; 
length=strlen(str); 
for(int i =0  ; i<length ; i=i+2){
    printf("%d %d \n",(int)str[i]+1 ,(int)str[i+1] ) ; 
if(str[i]=='(') {
    if((int)str[i]+1!=(int)str[i+1]) {
        printf("False !") ; 
        return 0 ; 
    }
    
   }
else if((int)str[i]+2!=(int)str[i+1]){
printf("False!") ; 
return 0 ; 
}



}
printf("True") ; 


}