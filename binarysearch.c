#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int st=0;
    int end=size-1 ;
    int mid ;
    while(st<=end){
        mid=(st+end)/2 ;
        if(arr[mid]==element){
            return mid ;
        }
        else if(arr[mid]<element){
            st=mid+1 ;
        }
        else{
            end=mid-1 ;
        }
    }
   // if(st>end){
    //   printf("Not Found") ;
   // }
   return -1 ;
}
int main(){
    int arr[]={1,2,3,4,5} ;
    int size = sizeof(arr)/sizeof(int) ;
    int element = 3 ;
    int searchindex=binarysearch(arr,size,element) ;
    printf("The element %d was found %d \n",element,searchindex) ;
    return 0 ;
}