#include<stdio.h>
struct student{
    char name[50] ;
    int roll ;
    float cgpa ;
};
void printinfo(struct student s[5]){
     for(int i=0;i<5;i++){
        printf("Name is %s \n",s[i].name) ;
        
        printf("Roll is %d \n",s[i].roll) ;
        
        printf("Cgpa is %f \n",s[i].cgpa) ;
        
    }
}
int main(){
    struct student s[5] ;
    for(int i=0;i<5;i++){
        printf("Enter name :\n") ;
        scanf("%s", &s[i].name) ;
        printf("Enter roll :\n") ;
        scanf("%d", &s[i].roll) ;
        printf("Enter cgpa :\n") ;
        scanf("%f", &s[i].cgpa) ;
    }
    printinfo(s) ;
    
    return 0 ;
}