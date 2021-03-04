#pragma once

#include <iostream>
#include "strFunctions.h"

class String{
protected:
    char* msg;
    int lenght;
public:
    String(int len);
    String(const char* msg);
    String(char msg);
    String(const String& other);
    ~String();
    
    void Clear();
    void Show(void);
    
    String& operator= (String& src);
    friend std::ostream& operator<< (std::ostream& stream, const String& str){
        stream << str.getString();
        return stream;
    }
    
    char* getString() const   { return msg; }
    int getLenght() const           { return lenght; }
};
