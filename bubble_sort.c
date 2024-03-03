#include<stdio.h>
void printarray(int arr[],int num){
    for(int i=0;i<num;i++){
        printf("%d ",arr[i] ) ;
    }
    printf("\n") ;
}

void bubblesort(int arr[],int num){
    int temp ;
    int k ;
    int issorted=0 ;
    for(int i=0;i<num-1;i++){       // For number of passes 
        printf("Working on pass number %d\n", i+1) ;
        issorted=1 ;
        for (int  j = 0; j < num-1-i; j++)      // For comparison in each pass 
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j] ;
                arr[j]=arr[j+1];
                arr[j+1]=temp ;
                issorted=0 ;
            } 
        }
        if(issorted){
            return ;
        }
    }
}
    
int main(){
    int arr[]={20,10,40,30,60,50} ;
    int num =6 ;
    printarray(arr,num) ;
    bubblesort(arr,num) ;
    printarray(arr,num) ;
    return 0 ;
}
