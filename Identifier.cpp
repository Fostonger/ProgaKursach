#include "Identifier.h"

bool isNonDigit(char i){
    int res = (int)i & 223;
    return (64 < res && res < 91) || (int) i == 95 ;
}

bool isDigit(char i){
    return 47 < (int)i && (int)i < 59;
}

Identifier::Identifier(){ }

Identifier::Identifier(const char* name){
    if(isNonDigit(name[0])){
        int len = my_strlen(name);
        for(int i = 0; i < len; i++){
            if (!(isNonDigit(name[i]) || isDigit(name[i]))){
                return;
            }
        }
        lenght = my_strlen(name);
        msg = new char[lenght];
        msg[len] = 0;
        my_strcpy(msg, name);
    }
}

Identifier::Identifier(const Identifier& other){
    msg = new char[other.lenght];
    lenght = other.lenght;
    my_strcpy(msg, other.msg);
    msg[lenght] = 0;
}

Identifier::~Identifier() { }

void Identifier::toUppercase(){
    for (int i = 0; i < lenght; i++)
        if(isNonDigit(msg[i]))
            msg[i] = msg[i] & 223;
}

