#include <cstdio>
using namespace std;

class c1 {
    int i = 0;
public:
    void setvalue( const int & value ) { i = value; }
    int getvalue() const;
};

int c1::getvalue() const { 
    printf("getValue: this is %p", this);
    return i; 
}

int main() {
    const int i = 47;
    c1 o1;
    o1.setvalue(i);
    printf("Address of o1 is %p\n", &01);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
