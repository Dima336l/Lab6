#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <input_file> <output_file>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    std::string fileContent;
    std::string line;
    while (std::getline(inputFile, line)) {
        fileContent += line + '\n';
    }

    inputFile.close();

    std::ofstream outputFile(argv[2]);

    if (!outputFile.is_open()) {
      std::cerr << "Failed to open the file: " <<argv[2] <<std::endl;
        return 1;
    }

    outputFile << fileContent;

    outputFile.close();

    return 0;
}
