#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[8],number[11];
    FILE *file = fopen("phonebook.csv", "w");
    
    printf("type your name to save it in the sheet:");
    scanf("%s",name);

    printf("type your number to save it in the sheet:");
    scanf("%s",number);

    fprintf(file,"%s,%s\n",name,number);

    fclose(file);
}