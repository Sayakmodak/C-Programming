#include<stdio.h>
int main(){
    int a;
    int b;
    int temp ;
    printf("Enter two numbers:") ;
    scanf("%d %d", &a, &b) ;
    printf("Before swapping:%d %d\n",a,b) ;
   temp=a ;
    a=b ;
    b=temp ;
    printf("After swapping:%d %d\n",a,b) ;
    return 0 ;
}