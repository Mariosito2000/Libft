#include "include/libft.h"

int main ()
{
    printf("%ld\n", ft_strlen("hola"));


    printf("Text to split:  Hello world. Have a lovely day.\n\n");
    
    char **splitted_text = ft_split("Hello world. Have a lovely day.", ' ');
    
    printf("Splitted text:\n\n");
    for (int i = 0; splitted_text[i]; i++)
        printf("%s\n", splitted_text[i]);

    printf("\nSplitted text end\n");

    return (0);
}
