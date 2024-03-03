#include<stdio.h>
int main(){
    int num,sum=0 ;
    printf("Enter number :\n") ;
    scanf("%d",&num) ;
   for(int i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i ;
    }
   }
    if(num==sum){
        printf("Perfect number ") ;
    }
    else{
        printf("Not") ;
    }
    return 0 ;
}