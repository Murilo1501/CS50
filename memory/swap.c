#include <stdio.h>

void swap(int *a,int *b);

int main(void)
{
    int x,y;
    x=1;
    y=2;

    printf("x: %i\n",x);
    printf("y: %i\n",y);

    swap(&x,&y);

    printf("x: %i\n",x);
    printf("y: %i\n",y);
}

void swap(int *a,int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}