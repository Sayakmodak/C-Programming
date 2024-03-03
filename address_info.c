#include<stdio.h>
#include<string.h>
typedef struct people_addresses_info{
    int house_no ;
    int block ;
    char city ;
    char state ;
}pai ;
void  printinfo(pai ppl[5]){
    for(int i=0;i<5;i++){
        printf("House no. is %d \n",ppl[i].house_no) ;
        printf("Block is %d \n",ppl[i].block) ;
        printf("City is %s \n",ppl[i].city) ;
        printf("State is %s \n",ppl[i].state) ;
    }
}
int main(){
    pai ppl[5] ;
    for(int i=0;i<5;i++){
        printf("Enter house no. :\n") ;
        scanf("%d", &ppl[i].house_no) ;
        printf("Enter block :\n") ;
        scanf("%d", &ppl[i].block) ;
        printf("Enter city :\n") ;
        scanf("%s", ppl[i].city) ;
        printf("Enter state :\n") ;
        gets(ppl[i].state) ;
       // scanf("%s", ppl[i].state) ;
    }
    printinfo(ppl) ;
    return 0 ;
}