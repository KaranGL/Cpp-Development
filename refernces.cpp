#include <cstdio>
using namespace std;

int main()
{
    int i = 5;
    int & ir = i;
    ir = 101;

    printf("i is %d\n", i);

    return 0;
}
