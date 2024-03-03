#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newfile.txt","r") ;
    if(fptr==NULL){
        printf("file does not exit.\n") ;

    }
    else{
        fclose(fptr) ;
    }
    
    return 0 ;
}