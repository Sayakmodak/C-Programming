#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file2.txt","w");

    char ch;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   // printf("%c\n",fgetc(fptr)) ;
   

    fputc('w',fptr) ;
    fputc('a',fptr) ;
    fputc('t',fptr) ;
    fputc('e',fptr) ;
    fputc('r',fptr) ;
    fputc('m',fptr) ;
    fputc('e',fptr) ;
    fputc('l',fptr) ;
    fputc('o',fptr) ;
    fputc('n',fptr) ;
    fclose(fptr) ;
    return 0;
}