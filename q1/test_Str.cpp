#include <iostream>
#include "Str.h"
using namespace std;

int main(){
    Str s1;
    char courseName[] = "cpp";
    Str s2(courseName);
    Str s3(s2);

    s2.print(); //cpp
    s3.print(); //cpp

    s1=s2; 
    s1.print(); //cpp
    ++s1;
    s1.print(); //dqq
    s1[0]='P';
    s1.print(); //Pqq
    
    if (s1==s2)
        cout << "these two objects are the same" << endl;
    else if (s1 != s2)
        cout << "these two objects are not the same" << endl;
    // these two objects are not the same
    cout << s1.getString() << endl;
    cout << s1.getSize() << endl; //4 (including the null)
    s2.reverse();
    s2.print(); //ppc
    s2.uppercase();
    s2.print(); //PPC

    return 0;
}
