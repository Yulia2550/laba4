#include "igrashka.h"
#include "mashina.h"
#include "myaka_igrashka.h"
#include <fstream>

#include "igrashka.h"
#include "mashina.h"
#include "myaka_igrashka.h"
#include <fstream>

// Додамо метод для зчитування з файлу для кожного класу
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
    // Відкриваємо вхідний файл
    std::ifstream inputFile("output4laba.txt", std::ios::in);

    if (!inputFile) {
        std::cout << "Unable to open file: output4laba.txt" << std::endl;
        return 1;
    }

    // Створюємо об'єкти для кожного класу
    Igrashka igrashka;
    Mashina mashina;
    MyakaIgrashka myakaIgrashka;

    // Зчитуємо дані для кожного класу
    ReadIgrashka(inputFile, igrashka);
    ReadMashina(inputFile, mashina);
    ReadMyakaIgrashka(inputFile, myakaIgrashka);

    // Закриваємо вхідний файл
    inputFile.close();

    // Створюємо нові об'єкти на основі прочитаних даних
    Igrashka igrashka2(igrashka);
    Mashina mashina2(mashina);
    MyakaIgrashka myakaIgrashka2(myakaIgrashka);

    // Відкриваємо вихідний файл для запису
    std::ofstream outputFile("output_combined.txt", std::ios::out);

    if (!outputFile) {
        std::cout << "Unable to open file: output_combined.txt" << std::endl;
        return 1;
    }

    // Записуємо дані у вихідний файл
    igrashka2.Print(outputFile);
    mashina2.Print(outputFile);
    myakaIgrashka2.Print(outputFile);

    // Закриваємо вихідний файл
    outputFile.close();

    return 0;
}

