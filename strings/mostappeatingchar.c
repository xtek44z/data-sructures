#include<stdio.h>





int main(void){
char str[100] ; 
int apperances[255]= {0} ; 
int i =0,ascii,max=0 ,letter  ; 
printf("Enter the string here :") ; 
gets(str) ; 

while(str[i] !='\0'){
if(str[i]!=' '){
ascii= (int)str[i]; 
apperances[ascii] +=1 ;  
}

i++ ;  
}
for( i =0 ; i<255 ;i++){
    if(apperances[i]>max){
        max = apperances[i] ; 
    letter = i ; 
    }
}
printf("The most appering character is %c with %d apperence . ",(char)letter , max) ;  







}