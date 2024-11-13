#include <stdio.h>

int main() {
    int a, b;

    // Input the interval [a, b]
    printf("Enter the start of the interval (a): ");
    scanf("%d", &a);
    printf("Enter the end of the interval (b): ");
    scanf("%d", &b);

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            switch (n) {
                case 1: printf("one\n"); break;
                case 2: printf("two\n"); break;
                case 3: printf("three\n"); break;
                case 4: printf("four\n"); break;
                case 5: printf("five\n"); break;
                case 6: printf("six\n"); break;
                case 7: printf("seven\n"); break;
                case 8: printf("eight\n"); break;
                case 9: printf("nine\n"); break;
            }
        } else {
            if (n % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
