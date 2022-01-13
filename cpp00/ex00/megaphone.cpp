#include <iostream>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    ft_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c + 'A' - 'a';
    return (c);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				std::cout << ft_upper(argv[i][j]);
		std::cout << std::endl;
    }
}