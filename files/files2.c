#include<stdio.h>



int main(){

FILE *in ; 
FILE*out ; 


in = fopen("data.txt","r") ; 
out = fopen("data2.txt","w") ; 
char ch = getc(in) ;
while(ch!=EOF){
    printf("%c",ch) ; 
    fprintf(out,"%c",ch) ; 
    ch = getc(in) ; 
}
fclose(in) ; 
//for(ch=getc(in);ch!=EOF;ch=getc(in)){
   // fprintf
//}



}