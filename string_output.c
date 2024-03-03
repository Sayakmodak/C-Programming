#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("string_output.txt","r") ;

    /* This is the method character by character 
    char ch ;
    ch=fgetc(fptr) ;
    while(ch!=EOF){
        printf("%c",ch) ;
        ch=fgetc(fptr) ;
    }*/
    
    // This the method of using fgets() 
    char str[100] ;
    while(fgets(str,100,fptr)!=NULL){
        puts(str) ;
    }

    fclose(fptr) ;
    return 0 ;
}