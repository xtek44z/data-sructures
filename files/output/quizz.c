#include<stdio.h>

//prompt the user to enter the name , gpa , 
//and age of a student and add this data
// to the text file data.txt  



typedef struct {
    char name[10] ; 
    double gpa ; 
    int age ; 
} student ; 





int main (){
FILE *in ; 
student x ; 
in = fopen("data.txt","a") ; 

printf("Enter the name of the student :") ; 
scanf("%s",x.name)  ; 
fprintf(in,"%s",x.name) ;
printf("Enter the GPA :") ; 
scanf("%lf",&(x.gpa)) ; 
fprintf(in,"%lf",x.name) ;


 

}