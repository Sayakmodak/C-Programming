#include<stdio.h>
int main(){
    int arr[6],i ;
    int max,min ;
    printf("Enter array:\n") ;
    for(i=0;i<6;i++){
        scanf("%d", &arr[i]) ;
    }
    printf("Your array:\n") ;
    for(i=0;i<6;i++){
        printf("%d ", arr[i]) ;
    }
    max=arr[0] ;
    min=arr[0] ;
    for(i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i] ;
        }
        else if(arr[i]<min){
            min=arr[i] ;
        }
    }
    printf("Max is %d ",max) ;
    printf("Min is %d ",min) ;
    printf("Difference is %d ", max-min) ;
    return 0 ;
}