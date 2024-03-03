#include<stdio.h>
#include<string.h>
int main(){
    char str[3][10]={"Sayak","Avik","Dhrovo"} ; // Initialize the string 
    char temp[10] ;                             // 3 is the size of the string
    int i,j ;                                  // 10 is the highest size of each string
        for(i=0;i<3-1;i++){
        for(j=i+1;j<3;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]) ;
                strcpy(str[i],str[j]) ;
                strcpy(str[j],temp) ;
            }
        }
    }
    for(i=0;i<3;i++){                       // printing the string 
        printf("%s \n",str[i]) ;
    }
    
    return 0 ;
}