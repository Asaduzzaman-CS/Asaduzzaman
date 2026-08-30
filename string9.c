#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char city[50];
    char copyName[50];
    char fullName[100];

    // String Input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your city: ");
    scanf("%s", city);

    // String Output
    printf("\n--- String Information ---\n");

    printf("Name: %s\n", name);
    printf("City: %s\n", city);

    // String Length
    printf("Length of Name: %d\n", strlen(name));
    printf("Length of City: %d\n", strlen(city));

    // String Copy
    strcpy(copyName, name);

    printf("Copied Name: %s\n", copyName);

    // String Compare
    if(strcmp(name, copyName) == 0)
    {
        printf("Name and Copy Name are Equal.\n");
    }
    else
    {
        printf("Name and Copy Name are Not Equal.\n");
    }

    // String Concatenation
    strcpy(fullName, name);
    strcat(fullName, " ");
    strcat(fullName, city);

    printf("Name + City: %s\n", fullName);

    return 0;
}
