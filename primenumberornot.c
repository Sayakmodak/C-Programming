#include<stdio.h>
int main(){
    int num,flag=1 ;
    printf("Enter number :\n") ;
    scanf("%d",&num) ;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
             flag=0 ;      // If flag=1 converts to flag=0 then will be aprime number
        }
    }
    if(flag==0){
        printf("Not prime number") ;
    }
    else{
        printf("Prime number") ;
    }
    return 0 ;
}