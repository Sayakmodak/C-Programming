#include<stdio.h>
int main(){
    int num,fact=1,sum=0 ;
    printf("Enter number :\n") ;
    scanf("%d",&num) ;
    int a=num ;
    while(num!=0){
        int rem=num%10 ;
        for(int i=1;i<=rem;i++){
            fact=fact*i ;
            
        }
        
        sum=sum+fact ;
        num=num/10 ;
        fact=1 ;
    }
    if(a==sum){
        printf("Peterson number ") ;
    }
    else{
        printf("Not") ;
    }
    return 0 ;
}