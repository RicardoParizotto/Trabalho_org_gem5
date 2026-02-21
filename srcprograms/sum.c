#include <stdio.h>
int main() {
    long sum = 0;
    for (int i = 0; i < 10000; i++) {
        sum += i;
    }
    printf("Sum: %ld\n", sum);
    return 0;
}
