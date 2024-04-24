#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int string_len(char *string)
{
    unsigned int i = 0;
    if (string == NULL){
        return i;
    }
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char name[] = "Hallo ";
    printf("Laenge von [%s] ist %u\n", name, string_len(name));

    return 0;
}
