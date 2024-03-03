#include<stdio.h>
int main(){
    int num ;
    int r = 0 ;
    int c;

    printf("Enter a number:\t") ;
    scanf("%d", &num) ;
    c=num ;
    while(num!=0){
       r =r*10;
       r =r+(num%10) ;
        num=num/10 ;
    }
    if(c==r){
        printf("Palindrome number") ;
    }
    else{
        printf("Not a palindrome number") ;
    }
    return 0 ;
}