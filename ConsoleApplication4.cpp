#include "igrashka.h"
#include "mashina.h"
#include "myaka_igrashka.h"
#include <fstream>
#include <string>


void Copyfile(const std::string& filedani, const std::string& filecopy) {
    std::ifstream inputFile(filedani, std::ios::in);
    std::ofstream outputFile(filecopy, std::ios::out);

    if (inputFile.is_open() && outputFile.is_open()) {
        std::string data;
        while (inputFile >> data) {
            outputFile << data << "\n";
        }

        inputFile.close();
        outputFile.close();
        std::cout << "Data copied successfully from " << filedani << " to " << filecopy << std::endl;
    }
    else {
        std::cout << "Failed to open files!" << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    std::ofstream outputFile("output4laba.txt", std::ios::out);

    Igrashka igrashka("Lego");
    Mashina mashina("sportcar", "lamborghini");
    MyakaIgrashka myakaIgrashka("teddy bear", "velour");

    igrashka.Print(outputFile);
    mashina.Print(outputFile);
    myakaIgrashka.Print(outputFile);

    outputFile.close();


    Copyfile("output4laba.txt", "copied_data.txt");

    return 0;
}
