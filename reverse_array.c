#include<stdio.h>
int main(){
    int arr[6] ;
    int i ;
    printf("Enter array elements:\n") ;
    for(i=0;i<6;i++){
        scanf("%d", &arr[i]) ;
    }
    printf("Array elements are %d\n", arr[i]) ;
    printf("Array elements after reversed are:\n") ;
    for(i=6-1;i>=0;i--){
        printf("%d\t",arr[i]) ;
    }
    
    return 0 ;
}