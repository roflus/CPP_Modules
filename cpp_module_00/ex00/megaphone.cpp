# include <iostream>
# include <string>
# include <cctype>

int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    size_t k;
    int i = 1;
    while (i < argc)
    {
        std::string str = argv[i];
        for(k = 0; k <= str.length(); k++)
            str[k] = toupper(str[k]);
        std::cout << str;
        i++;
    }
    std::cout << std::endl;
}