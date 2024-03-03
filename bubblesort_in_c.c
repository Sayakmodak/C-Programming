#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]) ;
    }
    printf("\n") ;
}
void bubblesort(int arr[],int n){
    int i,j ;
    int issorted=0 ;
    for(i=0;i<n-1;i++){
        printf("Working on pass number %d \n",i+1) ;
        issorted=1 ;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1] ;
                arr[j+1]=arr[j] ;
                arr[j]=temp ;
                issorted=0 ;
            }
        }
        if(issorted){
            return ;
        }
    }
}
int main(){
    int arr[]={30,40,20,10,50} ;
    int n=5 ;
    printf("Before sorting: \n") ;
    printarray(arr,n) ;
    bubblesort(arr,n) ;
    printf("After sorting: \n") ;
    printarray(arr,n) ;
    return 0 ;
}