#include<stdio.h>
int main(){
    int num ;
    int sum=0;
    int r ;
    int c;
    printf("Enter a number:\t") ;
    scanf("%d", &num) ;
    c=num ;
    while(num !=0){
        r=num%10 ;
        sum=r+(sum*10) ;
        num=num/10 ;

    }
    if(c==sum){
        printf("Palindrome number") ;
    }
    else{
        printf("Not") ;
    }

    return 0 ;
}