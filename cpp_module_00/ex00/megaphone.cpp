# include <iostream>
# include <cctype>
# include <cstring>

int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    size_t k, i = 1;
    while (argv[i])
    {
        for(k = 0; k <= strlen(argv[i]); k++)
            argv[i][k] = toupper(argv[i][k]);
        std::cout << argv[i];
        i++;
    }
    std::cout << std::endl;
}