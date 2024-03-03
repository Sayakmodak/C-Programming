#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("file.txt","a") ;
    char ch ;
    fprintf(fptr,"%c",'A') ;
    fprintf(fptr,"%c",'P') ;
    fprintf(fptr,"%c",'P') ;
    fprintf(fptr,"%c",'L') ;
    fprintf(fptr,"%c",'E') ;
    fclose(fptr) ;
    return 0;
}