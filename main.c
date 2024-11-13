#include <stdio.h>

struct MyStruct {
    char a;      // 1 byte
    int b;       // 4 bytes
    double c;    // 8 bytes
};

struct MyStruct2 {
    double c;    // 8 bytes
    char a;      // 1 byte
    int b;       // 4 bytes
};

int main() {
    struct MyStruct s1;
    struct MyStruct2 s2;

    // Display memory addresses for structure members of MyStruct
    printf("Memory addresses of members in MyStruct:\n");
    printf("Address of a: %p\n", (void*)&s1.a);
    printf("Address of b: %p\n", (void*)&s1.b);
    printf("Address of c: %p\n", (void*)&s1.c);

    printf("\n");

    // Display memory addresses for structure members of MyStruct2
    printf("Memory addresses of members in MyStruct2:\n");
    printf("Address of c: %p\n", (void*)&s2.c);
    printf("Address of a: %p\n", (void*)&s2.a);
    printf("Address of b: %p\n", (void*)&s2.b);

    return 0;
}
