#include <stdio.h>

int fiboEvenSum(int limit) {
    int previous = 0;
    int current = 1;
    int evenSum = 0;

    while (current <= limit) {
        if (current % 2 == 0) {
            evenSum += current;
        }

        int buffer = current;
        current += previous;
        previous = buffer;
    }

    return evenSum;
}
