#include<stdio.h>
struct student{
    int roll ;
    char name[50] ;
    int total ;
};
void printinfo(struct student s[3]){
    int j=0,max=0 ;
    for(int i=0;i<3;i++){
        printf("Roll no. is %d \n",s[i].roll) ;
        printf("Name is %s \n",s[i].name) ;
        printf("Toatl is %d \n",s[i].total) ;

        if(s[i].total>max){
            max=s[i].total ;
            j=i ;
        }
    }
    printf("Student who got highest marks :\n") ;
    printf("Name is %s \n",s[j].name) ;
    printf("Roll is %d \n",s[j].roll) ;
    printf("Marks is %d ",s[j].total) ;
}
int main(){
    struct student s[3] ;
    //int j=0,max=0 ;
    for(int i=0;i<3;i++){
        printf("Enter the roll no. \n") ;
        scanf("%d", &s[i].roll) ;
        printf("Enter the name \n") ;
        scanf("%s", s[i].name) ;
        printf("Enter the total \n") ;
        scanf("%d", &s[i].total) ;

    }
    printinfo(s) ;

    return 0 ;
}