#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char *dest, char *app, unsigned int size)
{
    if (dest == NULL || app == NULL)
    {
        return NULL;
    }
    if ((strlen(dest) + strlen(app) + 1) > (size_t)(size))
    {
        return NULL;
    }
    unsigned int i = strlen(dest);

    for (unsigned int j = 0; j < strlen(app); j++){
        dest[j+i]=app[j];
    }
    dest[i+strlen(app)]='\0';


    return dest;
}

int main()
{

    char dest[64] = {'\0'};
    strcpy(dest, "Hallo Kleiner");
    char *append = "Hallo Großer";
    printf("\n\n\nAus Dest [%s] mit Append [%s] wird:\n",
           dest,
           append)
          ;
    printf(" Dest neu : [%s]\n\n\n",concat(dest, append, 64));

    return 0;
}
