#include<stdio.h>
int main(){
   FILE *fptr ;
    fptr=fopen("existing_file.txt","a") ;
    char ch ;
    fscanf(fptr,"%c",&ch) ;
    printf("%c",ch) ;
    fscanf(fptr,"%c",&ch) ;
    printf("%c",ch) ;
    fscanf(fptr,"%c",&ch) ;
    printf("%c",ch) ;
    fscanf(fptr,"%c",&ch) ;
    printf("%c",ch) ;
    fscanf(fptr,"%c",&ch) ;
    printf("%c",ch) ;
    
    fputc(' ',fptr) ;
    fprintf(fptr,"%c",'w') ;
    fprintf(fptr,"%c",'o') ;
    fprintf(fptr,"%c",'r') ;
    fputc('l',fptr) ;
    fputc('d',fptr) ;

    fclose(fptr) ;
    return 0 ;
}