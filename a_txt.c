#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("a.txt","r") ;
    int num1,num2 ;
    fscanf(fptr,"%d",&num1) ;
    fscanf(fptr,"%d",&num2) ;
    fclose(fptr) ;
    fptr=fopen("a.txt","w") ;
    fprintf(fptr,"%d",num1+num2) ;
    fclose(fptr) ;
    return 0 ;
}