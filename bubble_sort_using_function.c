#include<stdio.h>
void printarray(int arr[],int num){ 
    int i ;
   
    for(i=0;i<num;i++){
        printf("%d ", arr[i]) ;
        
    }
    printf("\n") ;
}
void bubblesort(int arr[],int num){
    int issorted=0 ;
    for(int j=0;j<num-1;j++){               // For number of passes
     printf("Working on pass number: %d",j+1) ;
        issorted=1 ;  
        for(int k=0;k<num-1-j;k++){                 // For comparison in each pass
            if(arr[k]>arr[k+1]){
                int temp=arr[k] ;
                arr[k]=arr[k+1] ;
                arr[k+1]=temp ;
                issorted = 0 ;
            }
        }
        if(issorted){
            return ;
        }
        printf("\n") ;     
    }
}
int main(){
    int arr[]={20,10,30,50,40,70} ;
    int num = 6 ;
    printf("Before sorting: ") ;
    printarray(arr,num) ;
    bubblesort(arr,num) ;
    printf("\n") ;  
    printf("After sorting: ") ;
    printarray(arr,num) ;
    return 0 ;
}