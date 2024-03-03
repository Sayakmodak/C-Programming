#include<stdio.h>
int main(){
    int num ;
    int fact=1 ;
    printf("Enter your number:") ;
    scanf("%d", &num) ;

    for(int i=1;i<=num;i++){
        fact*=i ;
        printf("Factorial of %d is %d\n",num,fact) ;
    }
    return 0 ;
}