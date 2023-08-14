#include <iostream>
#include <fstream>
#include <string>

int replace(const std::string& filename, const std::string& oldWord, const std::string& newWord, const std::string& content)
{
    std::ofstream outfile(filename + ".replace");
    if (outfile.fail())
        return (1);
    
    size_t position = 0, last_position = 0;
    while ((position = content.find(oldWord, last_position)) != std::string::nposition)
    {
        outfile.write(&content[last_position], position - last_position);
        outfile << newWord;
        last_position = position + oldWord.length();
    }
    outfile.write(&content[last_position], content.length() - last_position);
    outfile.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "replace <file> old_word new_word" << std::endl;
        return (1);
    }

    std::ifstream infile(argv[1]);
    if (infile.fail())
    {
        std::cout << "Error: " << argv[1] << ": no such file or directory" << std::endl;
        return (1);
    }

    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    infile.close();

    return replace(argv[1], argv[2], argv[3], content);
}
