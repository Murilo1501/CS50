#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10];

    printf("type a string:");
    scanf("%s",s);

    char *t = malloc(strlen(s) + 1); //malloc -> memory alocation 

    for(int i =0, n = strlen(s); i<=n; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n",s);
    printf("t: %s",t);

    free(t);


}