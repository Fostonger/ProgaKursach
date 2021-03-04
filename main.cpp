/*
 Базовый класс - строка, строка-индентификатор
 Производный класс - десятичная строка
 Интерфейс - стандартные классы виндоуса используя прикладной интерфейс.
 Финогенов "WIN32 API Программирование" издат. ДиалогМИФИ
 */

#include <iostream>
#include "StringClass.h"
#include "Identifier.h"

void CopyStr(String str){
    std::cout << str << " will be broken in the function" << std::endl;
}

int main(){
    String str1("Fos");
    String str2('t');
    Identifier id1("_Hullo123");
    Identifier id2("blabla");
    
    id2 = id1;
    id1.toUppercase();
    std::cout << id1 << id1.getLenght() << std::endl;
    std::cout << id2 << id2.getLenght() <<std::endl;
    
    std::cout << str1.getString() << " the lenght is " << str1.getLenght() << std::endl;
    
    std::cout << str2 << " the lenght is " << str1.getLenght() << std::endl;
    CopyStr(str2);
}

