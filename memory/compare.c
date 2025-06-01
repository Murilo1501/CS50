#include <stdio.h>
#include <string.h>

int main()
{
    char s[100]; 
    char t[100];

    scanf("%99s", s); 
    scanf("%99s", t);


    if (strcmp(s, t) == 0)
    {
        printf("same");
    }
    else
    {
        printf("different");
    }

    return 0;
}
