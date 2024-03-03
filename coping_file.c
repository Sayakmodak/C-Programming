    /* Here we have to copy the content to "copy.txt" file 
       and then we have to paste the content in "paste.txt" file
       Here we use two pointers fptr1 for "copy.txt" and 
       fptr2 for "paste.txt" */  
#include<stdio.h>
int main(){
    FILE *fptr1 ;
    FILE *fptr2 ;
    fptr1=fopen("copy.txt","r") ;
    fptr2=fopen("paste.txt","w") ;
    char ch=fgetc(fptr1) ;
    while(ch!=EOF){
        fputc(ch,fptr2) ;
        ch=fgetc(fptr1) ;
    }
    fclose(fptr1) ;
    fclose(fptr2) ;
    return 0 ;
}