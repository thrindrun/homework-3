#include "Str.h"
#include <iostream>
#include <cstring>
using namespace std;

Str::Str() {
    Size = 1;
    str = new char[Size];
    str[0] = '\0';
}

Str::Str(const char* arr) {
    Size = strlen(arr)+1;
    str = new char[Size];
    strcpy(str,arr);
}

Str::Str(const Str& src) {
    Size = src.Size;
    str = new char[Size];
    strcpy(str,src.str);
}

Str& Str::operator=(const Str& src) {
    if (this != &src){
        delete[] str;
        Size = src.Size;
        str = new char[Size];
        strcpy(str,src.str);
    }
    return *this;
}

Str& Str::operator++() {
    for (int i=0;i<Size-1;i++)
        str[i]++;
    return *this;
}

char& Str::operator[](int index) {
    return str[index];
}

bool Str::operator==(const Str& src) {
    return strcmp(str, src.str) == 0;
}

bool Str::operator!=(const Str& src) {
    return !(strcmp(str, src.str) == 0);
}

const char* Str::getString() const {
    return str;
}

int Str::getSize() const {
    return Size;
}

void Str::print() const {
    cout << str << endl;
}

void Str::reverse() {
    int i=0,j=Size-2;
    while (i<j) {
        char temp= str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;j--;
    }
}

void Str::uppercase() {
    for (int i=0;i<Size-1;i++) {
        if (str[i]>='a' && str[i]<='z')
            str[i]=toupper(str[i]);
    }
}
