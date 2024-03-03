#include<stdio.h>
int main(){
    int num ;
    int c=0 ;
    printf("Enter number :\n") ;
    scanf("%d",&num) ;
    while(num!=0){
        num=num/10 ;
        c++ ;
    }
    printf("Digits are %d ",c) ;
    return 0 ;
}