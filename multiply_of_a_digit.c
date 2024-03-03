#include<stdio.h>
int main(){
    int num;
    int s=1 ;
    printf("Enter number:\n") ;
    scanf("%d", &num) ;
    while(num>0){
        int r= num%10 ;
        s= s*r ;
        num= num/10 ;

    }
    printf("Multiply is =%d", s) ;
    return 0 ;
}