#include <stdio.h>


int main(){


    int n,numbers[7] = {20,500,10,100,1,50};

    printf("type a number to serch in array:");
    scanf("%d",&n);

    for(int i = 0; i<7; i++){
        if(numbers[i] == n){
            printf("found number");
            return 0;
        } 
          
        
    }
    printf("number not found ");
    return 1;

}