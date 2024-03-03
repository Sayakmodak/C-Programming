#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("sum.txt","r") ;
    int a;
    int b;
    int c;
    int d;
    fscanf(fptr,"%d\n",&a) ;
    fscanf(fptr,"%d\n",&b) ;
    fscanf(fptr,"%d\n",&c) ;
    fscanf(fptr,"%d\n",&d) ;
    printf("1st number is %d\n",a) ;
    printf("2nd number is %d\n",b) ;
    printf("3rd number is %d\n",c) ;
    printf("4th number is %d\n",d) ;
    fclose(fptr) ;

    fptr=fopen("sum.txt","w") ;
    fprintf(fptr,"Sum is %d",a+b+c+d) ;
    fclose(fptr) ;
    return 0;
}
