#include<stdio.h>
int main(){
    int arr[10] ;
    int max,min ;
    int n,i ;
    printf("Enter how many elements you want to take:\n") ;
    scanf("%d", &n) ;
    printf("Enter numbers:\n") ;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]) ;
    }
    max=arr[0] ;
    min=arr[0] ;
    for(i=0;i<n;i++){
        if(arr[i]>max){
        max=arr[i] ;
        }
        
        else if(arr[i]<min){
        min=arr[i] ;
        }
        
    }
    printf("Max number is %d\n",max ) ;
    printf("Min number is %d\n",min ) ;
    printf("Difference will be %d", max-min) ;
    return 0 ;
}