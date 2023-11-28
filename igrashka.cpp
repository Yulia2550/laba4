#include "igrashka.h"

Igrashka::Igrashka(const std::string& name) {
    this->name = name;

}

void Igrashka::Print(std::ostream& out) {
    out << "Igrashka: " << name << std::endl;
}