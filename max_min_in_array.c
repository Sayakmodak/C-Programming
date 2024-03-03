#include<stdio.h>
int main(){
    int arr[6],i,max,min ;
    printf("Enter numbers upto 6:\n") ;
    for(i=0;i<6;i++){
        scanf("%d", &arr[i]) ;
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
    printf("Max number is %d\n", max) ;
    printf("Min number is %d\n", min) ;
    printf("Difference will be %d", max-min) ;
    return 0 ;
}
