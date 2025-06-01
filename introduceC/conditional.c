#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,y;
    
    printf("Type a number:");
    scanf("%d", &x);

    printf("Type other number");
    scanf("%d",&y);

    if(x > y)
    {
        printf("the smallest number is %d ", x);
    } else if(x == y)
    {
        printf("the numbers are equal");
    } else{
        printf("the biggest number is %d: ", y);
    }

}