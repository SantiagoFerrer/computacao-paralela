#include <stdio.h>

double taylor(int num) {
    double sum = 0;
    double i;
    for (i = 1; i <= num; i++) {
        sum = sum + (1/i);
    }
    return sum;
}

int main() {
    printf("%f", taylor(10));
}
