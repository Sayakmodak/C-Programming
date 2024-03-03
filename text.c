#include<stdio.h>
int main(){
    FILE *fptr1 ;
    FILE *fptr2 ;
    fptr1=fopen("text.txt","r") ;
    fptr2=fopen("text2.txt","w") ;
    char ch=fgetc(fptr1) ;
    while(ch!=EOF){
        fputc(ch,fptr2) ;
        ch=fgetc(fptr1) ;
    }
    fclose(fptr1) ;
    fclose(fptr2) ;
    return 0 ;
}