#include <iostream>
int main(int ac, char **av)
{
    if (ac < 2)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i = 1;
        while (--ac)
        {
            int j = 0;
            while (av[i][j])
                std::cout<<(char)std::toupper(av[i][j++]);
            i++;
        }
    }
    std::cout<<std::endl;
}
