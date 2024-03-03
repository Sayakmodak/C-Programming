#include<stdio.h>
#include<string.h>
typedef struct address{
    int houseno;
    int blockno;
    char city[50];
    char state[60];

}adr;

int main(){
    adr address[5];
    printf("First person:Enter the value of houseno:");
    scanf("%d",&address[0].houseno);
    printf("The value of houseno is %d\n",address[0].houseno) ;
    printf("Enter the value of blockno:");
    scanf("%d",&address[0].blockno);
    printf("The value of blockno is %d\n",address[0].blockno) ;
    printf("Enter the name of city:");
    scanf("%s",address[0].city);
    printf("The name of city is %s\n",address[0].city) ;
    printf("Enter the name of state:");
    scanf("%s",address[0].state);
    printf("The name of city is %s\n",address[0].state) ;

    printf("Second person:Enter the value of houseno:");
    scanf("%d",&address[1].houseno);
    printf("The value of houseno is %d\n",address[1].houseno) ;
    printf("Enter the value of blockno:");
    scanf("%d",&address[1].blockno);
    printf("The value of blockno is %d\n",address[1].blockno) ;
    printf("Enter the name of city:");
    scanf("%s",address[1].city);
    printf("The name of city is %s\n",address[1].city) ;
    printf("Enter the name of state:");
    scanf("%s",address[1].state);
    printf("The name of city is %s\n",address[1].state) ;
    
    printf("Third person:Enter the value of houseno:");
    scanf("%d",&address[2].houseno);
    printf("The value of houseno is %d\n",address[2].houseno) ;
    printf("Enter the value of blockno:");
    scanf("%d",&address[2].blockno);
    printf("The value of blockno is %d\n",address[2].blockno) ;
    printf("Enter the name of city:");
    scanf("%s",address[2].city);
    printf("The name of city is %s\n",address[2].city) ;
    printf("Enter the name of state:");
    scanf("%s",address[2].state);
    printf("The name of city is %s\n",address[2].state) ;

    


    return 0;
}