#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file3.txt","w");
    fputc('L',fptr) ;
    fputc('i',fptr) ;
    fputc('o',fptr) ;
    fputc('n',fptr) ;
    fclose(fptr) ;
    return 0;
}