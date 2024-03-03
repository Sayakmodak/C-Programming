#include<stdio.h>
int main(){
    int arr[6],i;
    printf("Enter :\n");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    printf("These are :\n");
    for(i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0 ;
}