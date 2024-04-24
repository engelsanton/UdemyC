#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *delimiter, char **list)
{
    // Input check
    if (list == NULL || delimiter == NULL)
    {
        return NULL;
    }
    // Speicher reservieren

    char *end_str = (char *)malloc(1000 * sizeof(char));
    if (end_str == NULL)
    {
        return NULL;
    }

    unsigned int mem_plc = 0;
    for (unsigned int i = 0; list[i] != NULL; i++)
    {
        for (unsigned int j = 0; list[i][j] != '\0'; j++)
        {
            end_str[mem_plc] = list[i][j];
            mem_plc++;
        }
        for (unsigned int j = 0;
             (delimiter[j] != '\0') && (list[i + 1] != NULL);
             j++)
        {
            end_str[mem_plc] = delimiter[j];
            mem_plc++;
        }
    }


    return end_str;
}

int main()
{
    char *list1[] = {NULL};
    char *list2[] = {"Clara", NULL};
    char *list3[] = {"Clara", "Florian", NULL};
    char *list4[] = {"Clara", "Florian", "Jan", NULL};
    char *s = NULL;

    s = join(" -> ", list1); // ""
    if (NULL != s)
    {
        printf("List1: %s\n", s);
        free(s);
    }

    s = join(" -> ", list2); // "Clara"
    if (NULL != s)
    {
        printf("List2: %s\n", s);
        free(s);
    }

    s = join(" -> ", list3); // "Clara -> Florian"
    if (NULL != s)
    {
        printf("List3: %s\n", s);
        free(s);
    }

    s = join(" -> ", list4); // "Clara -> Florian -> Jan"
    if (NULL != s)
    {
        printf("List4: %s\n", s);
        free(s);
    }

    return 0;
}
