#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
};
void printinfo(struct student s1,struct student s2){
    printf("Name of s1 is %s\n",s1.name) ;
    printf("Roll of s1 is %d\n",s1.roll) ;
    printf("Name of s1 is %s\n",s2.name) ;
    printf("Roll of s1 is %d\n",s2.roll) ;
}

int main(){
    struct student s1={5,"Raju"} ;
    struct student s2={6,"Rohan"} ;
    printinfo(s1,s2);
    return 0;
}