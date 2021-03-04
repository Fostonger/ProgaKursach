#include "strFunctions.h"

int my_strlen(const char* ptr){
    int len;
    for (len = 0; ptr[len]; len++);
    return len;
}

char* my_strcpy(char* destination, const char* source){
    int srclen = my_strlen(source);
    for (int i = 0; i < srclen; i++){
        destination[i] = source[i];
    }
    return destination;
}

bool my_strcmp(const char* s1,const char* s2){
    if (my_strlen(s1) != my_strlen(s2))
        return false;
    for (int i = 0; s1[i]; i++){
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
