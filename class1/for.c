#include <stdio.h>
#include <stdlib.h>
void meow(int n);

int main(void)
{
    int n;

    printf("Type the times that the function will repeat : ");
    scanf("%d", &n);

    meow(n);
}




void meow(int n)
{
    for(int i = 0; i < n; i++){
       printf("Meow\n");
    }
}