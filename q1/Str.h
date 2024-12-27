#ifndef STR_H
#define STR_H

class Str {
    public:
        Str();
        Str(const char *arr);
        Str(const Str& src);
        Str& operator=(const Str& src);
        Str& operator++();
        char& operator[](int index);
        bool operator==(const Str& src);
        bool operator!=(const Str& src);
        const char* getString() const;
        int getSize() const;
        void print() const;
        void reverse();
        void uppercase();
    private:
        int Size;
        char* str;
};

#endif

