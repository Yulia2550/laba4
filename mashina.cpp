#include "mashina.h"

Mashina::Mashina(const std::string& name, const std::string& brand) : Igrashka(name), brand(brand) {}

void Mashina::Print(std::ostream& out) {
    out << "Mashina: " << name << ", Brand: " << brand << std::endl;
}

