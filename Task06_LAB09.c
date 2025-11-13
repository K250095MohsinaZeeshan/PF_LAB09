#include <stdio.h>

char* formatName(char *first, char *last) 
{
    static char fullName[100]; 
    int i = 0, j = 0;

    while (first[i] != '\0' && first[i] != '\n') 
	{
        fullName[i] = first[i];
        i++;
    }
    fullName[i] = ' ';
    i++;

    while (last[j] != '\0' && last[j] != '\n') 
	{
        fullName[i] = last[j];
        i++;
        j++;
    }
    fullName[i] = '\0';

    return fullName;
}
int main() 
{
    char first[50], last[50];
    printf("STATIC ARRAY FORMATTING\n");
    printf("_______________________\n");
    printf("\nEnter first name: ");
    fgets(first, sizeof(first), stdin);   

    printf("\nEnter last name: ");
    fgets(last, sizeof(last), stdin);

    char *fullName = formatName(first, last);
    printf("\nFormatted Name: %s\n", fullName);

    return 0;
}

