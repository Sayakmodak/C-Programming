#include<stdio.h>
int main(){
    int arr[50],n,i ;
    printf("Enter the size of the array :\n") ;
    scanf("%d",&n) ;
    printf("Enter the array elements :\n") ;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]) ;
    }
    printf("The array elements are :\n") ;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]) ;
    }
    
    return 0;
}