//#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
    int i;

    i = 0;
    while((str1[i] != '\0' || str2[i] != '\0') && str1[i] == str2[i])
    {
        i++;
    }
    return (str1[i] - str2[i]);
}
/*int main(void)
{
    char    str1[] = "secta 42";
    char    str2[] = "secta";
    printf("%d\n", ft_strcmp(str1, str2));
}*/