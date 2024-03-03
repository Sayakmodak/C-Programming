#include<stdio.h>
int main(){
    FILE  *fptr;
    fptr=fopen("table2.txt","w") ;
    int num;
    printf("Enter number:\n") ;
    scanf("%d",&num) ;

    for(int i=1;i<=10;i++){
        fprintf(fptr,"Multiplication Table of %d is:\n",num) ;
        fprintf(fptr,"%d x %d= %d",num,i,num*i) ;
    }
    fclose(fptr) ;
    return 0;
}