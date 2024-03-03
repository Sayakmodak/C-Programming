#include<stdio.h>
int main(){
    int n,i=0 ;
    int arr[16] ;
    printf("Enter a number:\t") ;
    scanf("%d", &n) ;
    while(n!=0){
        int rem=n%2 ;
        n=n/2 ;
        arr[i]=rem ;
        i++ ;
    }
    printf("Equivalent Binary number:\n") ;
    for(int j=i-1;j>=0;j--){
        printf("%d", arr[j]) ;
    }
    return 0 ;
}