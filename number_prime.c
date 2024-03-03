#include<stdio.h>
int main(){
    int num ;
    int flag=0 ;
    printf("Enter number : ") ;
    scanf("%d",&num) ;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            //printf("Not prime number") ;
            flag=1 ;
        }
        else{
             //flag=0 ;
             printf("Prime number") ;
             break ;
        }

    }
     if(flag=1){
         printf("Not Prime number") ;
    }
    // else if(flag=0){
    //      printf("Prime number") ;
    //  }
    return 0 ;
}