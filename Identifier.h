#pragma once

#include "StringClass.h"

class Identifier : public String {
public:
    Identifier();
    Identifier(const char* name);
    Identifier(const Identifier& name);
    ~Identifier();
    
    void toUppercase();
    
};
