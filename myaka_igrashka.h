#pragma once
#include "igrashka.h"

class MyakaIgrashka : public Igrashka {
protected:
    std::string material;

public:
    MyakaIgrashka() : Igrashka(""), material("") {}
    MyakaIgrashka(const std::string& name, const std::string& material);
    void Print(std::ostream& out);
};