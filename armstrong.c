#include<stdio.h>
int main(){
    int num ;
    int r;
    int arm=0 ;
    int g=arm ;
    printf("Enter your number:\n") ;
    scanf("%d", &num) ;
    while(num!=0){
        r=num%10 ;
        arm=arm+(r*r*r);
        num=num/10;
    }
    if(g==arm){
        printf("Armstrong number") ;
    }
    else{
        printf("Not Armstrong number") ;
    }
    return 0 ;
}