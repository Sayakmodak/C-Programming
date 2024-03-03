#include<stdio.h>
int fact(int n) ;
int main(){
    int num ;
    printf("Enter your numbeer:") ;
    scanf("%d", &num) ;

    printf("Factorial of %d is %d",num,fact(num)) ;
    return 0 ;
}

int fact(int n){

    if(n==0){
        return 1 ;
    }
    int factn1=fact(n-1) ;
    int factn=factn1 * n ;
    return factn ;
} 