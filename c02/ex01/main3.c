#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int    main(void)
{
    //char *src[6] = { 'N', 'o', 'm', 'e', 's', '\0' };
    char    src[6] = { "Nomes" };
    char    dest[10] = { "Zzzzz" };
    char    src2[6] = { "Nomes" };
    char    dest2[10] = { "Zzzzz" };
    unsigned int    n = 6;

    ft_strncpy(dest, src, n);
    printf("\nFT_STRNCPY: %s\n", dest);

    strncpy(dest2, src2, n);
    printf("   STRNCPY: %s\n\n", dest2);

    if (dest[4] == 's')
    {
        printf("OK: dest[4] = s");
    } else
    {
        printf("KO: dest[4] != NULL\n\n");
    }

    return (0);
}