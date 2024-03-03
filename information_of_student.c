#include<stdio.h>
int main(){
    FILE *fptr;
   fptr=fopen("Infohrmation of students.txt","w") ;

   char name[50] ;
   int roll;
   int age;

   printf("Enter name:\n") ;
   scanf("%s",name) ;
   printf("Enter roll:\n") ;
   scanf("%d",&roll) ;
   printf("Enter age:\n") ;
   scanf("%d",&age) ;

   fprintf(fptr,"Name is: %s\n",name) ;
   fprintf(fptr,"Roll is: %d\n",roll) ;
   fprintf(fptr,"Age is: %d\n",age) ;

    fclose(fptr) ;
   
    return 0 ;
}