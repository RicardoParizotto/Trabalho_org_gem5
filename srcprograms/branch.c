#include <stdlib.h>
int main() {
    int res = 0;
    for (int i = 0; i < 10000; i++) {
        if (i % 2 == 0) res += i;
        else res -= i;
    }
    return res;
}
