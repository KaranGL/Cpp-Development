// char-escape.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main() {
    char string[] = "This is a string.";

    cout << string << "\n\tThis is concatenation\a"<< endl;
    return 0;
}
