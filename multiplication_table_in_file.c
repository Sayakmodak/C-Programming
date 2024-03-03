#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("multiplicatiiontble.txt","w") ;
    int num ;
    printf("Enter number :\n") ;
    scanf("%d",&num) ;
    fprintf(fptr,"Multiplication table of %d is :\n",num) ;
    for(int i=1;i<=10;i++){
        fprintf(fptr,"%d x %d = %d \n",num,i,(num*i)) ;
    }
    fclose(fptr) ;
    return 0 ;
}