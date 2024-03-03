#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf ("%d ",arr[i]) ;
    }
}
void selectionsort(int arr[],int n){
    int i,j,min;
    for(i=0 ;i<n-1;i++){
        min = i ;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j ;
            }
    }
    int temp=arr[min] ;
    arr[min]=arr[i] ;
    arr[i]=temp ;
    }
}
int main(){
    int arr[]={60,50,40,30,20,10} ;
    int n=sizeof(arr)/sizeof(int) ;
    printarray(arr,n) ;
    printf("\n") ;
    selectionsort(arr,n) ;
    printf("\n") ;
    printarray(arr,n) ;

    return 0 ;
}