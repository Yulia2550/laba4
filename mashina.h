#pragma once
#include "igrashka.h"

class Mashina : public Igrashka {
protected:
    std::string brand;

public:
    Mashina() : Igrashka(""), brand("") {}
    Mashina(const std::string& name, const std::string& brand);
    void Print(std::ostream& out);
};

