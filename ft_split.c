#include "libft.h"

void    free_all(char **strs, int i)
{
    int n = 0;
    while ( n < i)
    {
        free(strs[n]);
        n++;
    }
    free(strs);
}

int count_word(const char*s, char c)
{
    int i =0;
    int count = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            count++;
            while (s[i] != c)
                i++;
        }
    }
    return count;
}

char **ft_split(const char *s, char c)
{
    int i;
    int j;
    char **strs;
    
    i = 0;
    strs = malloc(sizeof(char*) * ((count_word(s, c)) + 1));
    if (!strs)
    {
        free(strs);
    }
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            i++;
        }
        else
        {
            j = i;
            while (s[i] != c)
            {
                i++;
            }
            
        }
    }
    i++;
    strs[i] = malloc(sizeof(char*));
    strs[i] = (char*)NULL;
    if (!strs[i])
    {
        printf("feur");
        free_all(strs, i);
    }
    return strs;
}

// char **ft_split(char *s, char c)
// {
//     int i =0;
//     char **strs = malloc(sizeof(char*) * ((count_word(s, c)) + 1));
//     if (!strs)
//     {
//         free(strs);
//     }
//     while (*s != '\0')
//     {
//         if (*s == c)
//         {
//             *s = '\0';
//             s++;
//         }
//         else
//         {
//             strs[i] = malloc(sizeof(char*));
//             strs[i] = s;
//             if (!strs[i])
//             {
//                 free_all(strs, i);
//             }
//             i++;
//             while ( *s != c)
//                 s++;
//         }
//     }
//     i++;
//     strs[i] = malloc(sizeof(char*));
//     strs[i] = (char*)NULL;
//     if (!strs[i])
//     {
//         printf("feur");
//         free_all(strs, i);
//     }
//     return strs;
// }