#include<stdio.h>
int main(){
   FILE *fptr;
   fptr=fopen("file4.txt","r") ;
   char n;
   n=fgetc(fptr) ;
   while(n!=EOF){
    printf("%c",n) ;
    n=fgetc(fptr) ;
   }
   printf("\n") ;
   fclose(fptr) ;
    return 0;
}
