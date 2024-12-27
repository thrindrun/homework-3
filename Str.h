class Str {
    public:
        Str();
        Str(const char *arr);
        Str(const Str& src);
        char* getString();
        int getSize();
        void print();
        void reverse();
        void uppercase();
    private:
        int Size;
        char* str;
};
