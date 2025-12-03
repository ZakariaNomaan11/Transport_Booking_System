#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("_________________________________\n");
    printf("            Bookers              \n");
    printf("_________________________________\n");
    int choice=0;
    printf("Your Choice:\n");
    printf("1. User Login\n");
    printf("2. Admin Login\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("User Login Selected\n");
    }
    else if(choice==2){
        printf("Admin Login Selected\n");
    }
    else{
        printf("Invalid Choice\n");
    }
    
    
    
    
    
    return 0;
}