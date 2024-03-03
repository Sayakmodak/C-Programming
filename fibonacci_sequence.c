#include<stdio.h>
int fib(int n) ;
int main(){
    int num ;
    printf("Enter your number:") ;
    scanf("%d", &num) ;

    printf("Fibonacci Sequence is %d", fib(num)) ;
    return 0 ;
}

int fib(int n){ 
    if(n==0){
        return 0 ;
    }
    if(n==1){
        return 1 ;
    }
    int fibn1=fib(n-1) ;
    int fibn2=fib(n-2) ;
    int fibn=fibn1 + fibn2 ;
    return fibn ;
}