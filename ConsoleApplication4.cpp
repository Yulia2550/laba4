#include "igrashka.h"
#include "mashina.h"
#include "myaka_igrashka.h"
#include <fstream>

#include "igrashka.h"
#include "mashina.h"
#include "myaka_igrashka.h"
#include <fstream>

// ������ ����� ��� ���������� � ����� ��� ������� �����
void ReadIgrashka(std::ifstream& inputFile, Igrashka& igrashka) {
    std::string name;
    inputFile >> name;
    igrashka = Igrashka(name);
}

void ReadMashina(std::ifstream& inputFile, Mashina& mashina) {
    std::string name, brand;
    inputFile >> name >> brand;
    mashina = Mashina(name, brand);
}

void ReadMyakaIgrashka(std::ifstream& inputFile, MyakaIgrashka& myakaIgrashka) {
    std::string name, material;
    inputFile >> name >> material;
    myakaIgrashka = MyakaIgrashka(name, material);
}

int main() {
    // ³�������� ������� ����
    std::ifstream inputFile("output4laba.txt", std::ios::in);

    if (!inputFile) {
        std::cout << "Unable to open file: output4laba.txt" << std::endl;
        return 1;
    }

    // ��������� ��'���� ��� ������� �����
    Igrashka igrashka;
    Mashina mashina;
    MyakaIgrashka myakaIgrashka;

    // ������� ��� ��� ������� �����
    ReadIgrashka(inputFile, igrashka);
    ReadMashina(inputFile, mashina);
    ReadMyakaIgrashka(inputFile, myakaIgrashka);

    // ��������� ������� ����
    inputFile.close();

    // ��������� ��� ��'���� �� ����� ���������� �����
    Igrashka igrashka2(igrashka);
    Mashina mashina2(mashina);
    MyakaIgrashka myakaIgrashka2(myakaIgrashka);

    // ³�������� �������� ���� ��� ������
    std::ofstream outputFile("output_combined.txt", std::ios::out);

    if (!outputFile) {
        std::cout << "Unable to open file: output_combined.txt" << std::endl;
        return 1;
    }

    // �������� ��� � �������� ����
    igrashka2.Print(outputFile);
    mashina2.Print(outputFile);
    myakaIgrashka2.Print(outputFile);

    // ��������� �������� ����
    outputFile.close();

    return 0;
}

