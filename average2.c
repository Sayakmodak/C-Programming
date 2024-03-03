#include<stdio.h>
int avg(int a,int b,int c) ;
int main(){
    int x,y,z ;
    printf("Enter the value of x:\n") ;
    scanf("%d",&x) ;
    printf("Enter the value of y:\n") ;
    scanf("%d",&y) ;
    printf("Enter the value of z:\n") ;
    scanf("%d",&z) ;
    printf("Average is %d",avg(x,y,z)) ;

    return 0 ; 
}

int avg(int a,int b,int c){
    int result ;
    result=(a+b+c)/3 ;
    return result ;
}