
#include<stdio.h>
void printarray(int arr[], int n){
    int i ;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]) ;
    }
}
void selectionsort(int arr[],int n){
    int min,i,j ;
    for(i=0;i<n-1;i++){         // For number of passes
        min=i ;
        for(j=i+1;j<n;j++){              // For comparison in each pass
            if(arr[j]<arr[min]){
                min=j ;
            }
        }
        int temp=arr[min] ;
        arr[min]=arr[i] ;                  // For swapping
        arr[i]=temp ;
    }
}
int main(){
    int arr[]={50,40,30,20,10} ;
    int n=5 ;
    printarray(arr,n) ;
    printf("\n") ;
    selectionsort(arr,n) ;
    printf("\n") ;
    printarray(arr,n) ;
    return 0 ;
}