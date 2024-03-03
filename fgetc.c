#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file3.txt","a") ;
    char ch;
    //printf("Character is %c\n",fgetc(fptr)) ;
    //printf("Character is %c\n",fgetc(fptr)) ;
    //printf("Character is %c\n",fgetc(fptr)) ;
    //printf("Character is %c\n",fgetc(fptr)) ;

    fputc('T',fptr) ;
    fputc('i',fptr) ;
    fputc('g',fptr) ;
    fputc('e',fptr) ;
    fputc('r',fptr) ;
    fclose(fptr) ;
    return 0;
}