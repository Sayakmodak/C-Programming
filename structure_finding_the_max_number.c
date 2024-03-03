#include<stdio.h>
struct student{
    char name[50] ;
    int roll ;
    int marks ;
};
void printinfo(struct student s[3]){
    int j=0,max=0 ;
    for(int i=0;i<3;i++){
        printf("Name is %s \n",s[i].name) ;
        printf("Roll is %d \n",s[i].roll) ;
        printf("Marks is %d \n",s[i].marks) ;

        if(s[i].marks>max){
            max=s[i].marks ;
            j=i ;
        }
    }
    
    printf("The student who got highest marks :\n") ;
    printf("Name is %s \n",s[j].name) ;
    printf("Roll is %d \n",s[j].roll) ;
    printf("Marks is %d \n",s[j].marks) ;
}
int main(){
    struct student s[3] ;
    for(int i=0;i<3;i++){
        printf("Enter name :\n") ;
        scanf("%s", s[i].name) ;
        printf("Enter roll :\n") ;
        scanf("%d", &s[i].roll) ;
        printf("Enter marks :\n") ;
        scanf("%d", &s[i].marks) ;
    }
    printinfo(s) ;
    return 0 ;
}