#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    std::cout << "---------------INT-----------------" << std::endl;
    Array<int> empty;
    Array<int> test(7);
    try {
        for(int i = 0; i < 7; i++){
            test[i] = i;
        }
        for(int i = 0; i < 7; i++){
           std::cout << "Int: " << test[i] << std::endl;
        }
    }
    catch (const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    std::cout << "Empty size: " << empty.size() << std::endl;
    std::cout << "Test size: " << test.size() << std::endl;


    std::cout << "---------------Float-----------------" << std::endl;
    Array<float> empt;
    Array<float> ftest(5);
    float f = 0.1f;
    try {
        for(int i = 0; i < 5; f += 0.1, i++){
            ftest[i] = f;
        }
        for(int i = 0; i < 7; i++){
           std::cout << "Float: " << ftest[i] << std::endl;
        }
    }
    catch (const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    std::cout << "Ftest size: " << ftest.size() << std::endl;

    std::cout << "---------------String-----------------" << std::endl;
    Array<std::string> emp;
    Array<std::string> stest(5);
    try {
        stest[0] = "1";
        stest[1] = "2";
        stest[2] = "3";
        stest[3] = "4";
        stest[4] = "5";
        for(int i = 0; i < 7; i++){
           std::cout << "String: " << stest[i] << std::endl;
        }
    }
    catch (const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    return 0;
}