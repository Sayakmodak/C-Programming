#include<stdio.h>
int binarysearch(int arr[],int size,int key){
    int st=0 ;
    int end = size-1 ;
    while(st<=end){
        int mid=(st+end)/2 ;
        if(arr[mid]==key){
            return mid ;
           
        }
        else if(arr[mid]<key){
            st=mid+1 ;              
        }
        else{
            end=mid-1 ;
        }
    }
    return -1 ;
}
    


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100} ;
    int size=sizeof(arr)/sizeof(int) ;
    int key = 20 ;
    int searchindex=binarysearch(arr,size,key) ;
    printf("%d is in the index number %d ", key ,searchindex) ;
    return 0 ;
}