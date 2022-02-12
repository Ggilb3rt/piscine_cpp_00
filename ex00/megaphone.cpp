#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    char    *str;
    int     len;

    if (ac > 1)
    {
        av++;
        while (*av != NULL)
        {
            str = *av;
            len = strlen(str);
            for (int x = 0; x < len; x++)
                std::cout << (char)toupper(str[x]);
            av++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}