#include "StringClass.h"

String::String(int len)
    : lenght(len), msg (new char[len+1])
{
    if (len == 0)
        msg[0] = '\0';
    std::cout << "String::String(int len)" << std::endl;
}

String::String(const char* Msg)
    : lenght(my_strlen(Msg))
{
    msg = new char[lenght + 1];
    my_strcpy(msg, Msg);
}

String::String(char Msg)
    : lenght(1), msg(new char[2])
{
    msg[0] = Msg;
    msg[1] = '\0';
    std::cout << "String::String(char Msg)" << std::endl;
}

String::String(const String& other){
    msg = new char[other.lenght + 1];
    lenght = other.lenght;
    my_strcpy(msg, other.msg);
}

void String::Clear(){
    for (int i = 0; i < lenght; i++){
        msg[i] = 0;
    }
}

String& String::operator= (String& src){
    if(lenght < src.lenght){
        delete []msg;
        msg = new char[src.lenght + 1];
    }
    clear();
    lenght = src.lenght;
    
    my_strcpy(this->msg, src.msg);
    return *this;
}

String::~String(){
    delete []msg;
}
