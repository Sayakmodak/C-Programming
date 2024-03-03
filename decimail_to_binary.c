#include<stdio.h>
int main(){
    int num,arr[16] ;
    int i=0,j=0 ;
    printf("Enter decimal number:\n") ;
    scanf("%d", &num) ;
    while(num!=0){
        int rem=num%2 ;
        num=num/2 ;
        arr[i]=rem ;
        i++ ;
    }
    printf("Binary numbers:") ;
    for(j=i-1;j>=0;j--){
        printf("%d", arr[j]) ;
    }

    return 0 ;
}