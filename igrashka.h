#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Igrashka {
protected:
    std::string name;

public:
    Igrashka() = default;
    Igrashka(const std::string& name);
    void Print(std::ostream& out);
};