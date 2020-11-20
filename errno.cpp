#include <cstdio>
#include <cstring>
#include <cerrno>

int main() {
    printf("errno is: %d\n", errno);
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    //to print error message using perror function
    printf("errno is: %d\n", errno);
    perror("Cannot erase file");
    //to print error message using printf
    const char * a = strerror(errno);
    printf("The error is '%s'\n", a);
    return 0;
}
