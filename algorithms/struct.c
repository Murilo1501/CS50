#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[10];
    char number[20];
} person;

int main(){
    person people[1];

   strcpy( people[0].name, "Murilo"); 
   strcpy( people[0].number , "11933089944" );

   printf("%s",people[0].name);
   printf("%s",people[0].number);
}