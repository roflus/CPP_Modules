#include <iostream>
#include <fstream>

static bool inputCheck(int argc){
    if (argc != 4){
        std::cout << "Need 3 arguments" << std::endl;
        return false;
    }
    return true;
}

int main(int argc, char **argv){

    if (inputCheck(argc) == false)
        return EXIT_FAILURE;
    // Open infile
    std::ifstream   infile;
    std::string     fileName = argv[1];
    infile.open(fileName, std::ios::in);
    if (!infile){
        std::cout << "Can't open infile" << std::endl;
        return EXIT_FAILURE;
    }
    // Open outfile
    std::ofstream   outfile;
    std::string     newFileName = fileName + ".replace";
    outfile.open(newFileName, std::ios::out | std::ios::app);
    if (!outfile){
        std::cout << "Can't open outfile" << std::endl;
        return EXIT_FAILURE;
    }
    // Compare string s1 with infile and if the same replace with s2
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string compare;
    while(!infile.eof()){
        getline(infile, compare);
        if (compare.compare(s1) == 0)
            outfile << s2;
        else
            outfile << compare;
        if (!infile.eof())
            outfile << std::endl;
    }
    infile.close();
    outfile.close();
    return EXIT_SUCCESS;
}