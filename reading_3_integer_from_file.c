#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("reading_integer_from_file.txt","r") ;
    int num ;
    /*fscanf(fptr,"%d",&num) ;
    printf("Number is %d ",num) ;
    
    fscanf(fptr,"%d",&num) ;
    printf("Number is %d ",num) ;
    
    fscanf(fptr,"%d",&num) ;
    printf("Number is %d ",num) ;*/

    fscanf(fptr,"%d",&num) ;
    while(num!=EOF){
        printf("Number is %d ",num) ;
        fscanf(fptr,"%d",&num) ;
    }
    fclose(fptr) ;
    return 0 ;
}