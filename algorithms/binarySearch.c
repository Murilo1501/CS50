#include <stdio.h>

int binarySearch(int n,int array[]);

int main(){
    int array[6] = {1,2,3,4,5,6};  
    int n;

    printf("type a number:");
    scanf("%d",&n);

    int result = binarySearch(n,array);
    printf("%d",result);
   
}

int binarySearch(int n,int array[])
{
   int lower = 0;
    int higher = 5;

    while(lower <= higher){
        int mid = (lower + higher)/2;

        if(array[mid] == n){
            return mid;
        } else if (array[mid] > n){
            higher = mid - 1;
        } else if(array[mid] < n){
            lower = mid + 1;
        }

        
    }

    return - 1;
}