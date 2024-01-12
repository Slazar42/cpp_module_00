#include <iostream>
int main(int ac, char **av)
{
    std::string str;

    if (ac < 2)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i = 1;
        while (--ac)
        {
            int j = 0;
            str = av[i];
            while (str[j])
                std::cout<<(char)std::toupper(str[j++]);
            i++;
        }
    }
    std::cout<<std::endl;
}
