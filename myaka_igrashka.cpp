#include "myaka_igrashka.h"

MyakaIgrashka::MyakaIgrashka(const std::string& name, const std::string& material) : Igrashka(name), material(material) {}

void MyakaIgrashka::Print(std::ostream& out) {
    out << "MyakaIgrashka: " << name << ", Material: " << material << std::endl;
}