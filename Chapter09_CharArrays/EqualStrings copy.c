#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_comp(char *str1, char *str2)
{
    int i = 0;
    if (str1 == NULL || str2 == NULL)
    {
        return -1;
    }
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str1[] = "Hlo";
    char str2[] = "Hlo";
    printf("Ist [%s] gleich [%s] = %d", str1, str2, string_comp(str1, str2));
    return 0;
}
