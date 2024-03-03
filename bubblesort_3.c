#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]) ;
    }
}
void bubblesort(int arr[],int n){
    int i,j ;
    int issorted=0 ;
    for(i=0;i<n-1;i++){
        printf("Working on pass number %d", i+1) ;
        issorted=1 ;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j] ;
                arr[j]=arr[j+1] ;
                arr[j+1]=temp ;
                issorted=0 ;
            }
        }
        printf("\n") ;
        if(issorted){
            return ;
        }
    }
}
int main(){
    int arr[]={50,60,70,20,30,40} ;
    int n=sizeof(arr)/sizeof(int) ;
    printf("Before Sorting:") ;
    printarray(arr,n) ;
    printf("\n") ;
    bubblesort(arr,n) ;
    printf("After Sorting:") ;
    printarray(arr,n) ;
    return 0 ;
}