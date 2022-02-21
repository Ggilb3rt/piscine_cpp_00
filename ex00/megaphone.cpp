#include <iostream>
#include <cstring>

void    print_upper( char *av)
{
    std::string s = av;

    for (size_t x = 0; x < s.length(); x++)
    {
        std::cout << (char)toupper(s.c_str()[x]);
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        av++;
        while (*av != NULL)
        {
            print_upper(*av);
            av++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}