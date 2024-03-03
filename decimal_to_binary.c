#include<stdio.h>
int main(){
    int num,i=0 ;
    int arr[16] ;
    printf("Enter number:\n") ;
    scanf("%d", &num) ;
    while(num!=0){
        int rem=num%2 ;
        num=num/2 ;
        arr[i] =rem ;
        i++ ;
    }
    printf("Equivalent binary number is:") ;
    for(int j=i-1;j>=0;j--){
        printf("%d", arr[j]) ;
    }

    return 0 ;
}