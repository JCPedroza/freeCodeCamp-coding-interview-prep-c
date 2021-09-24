#include <stdlib.h>
#include <stdio.h>

int multiplesOf3and5(int limit) {
    int sum = 0;

    for (int num = 3; num < limit; num++) {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
        }
    }

    return sum;
}

int main(int argc, char *argv[]) {
    int num = strtol(argv[1], NULL, 10);
    printf("%d\n", multiplesOf3and5(num));
}
