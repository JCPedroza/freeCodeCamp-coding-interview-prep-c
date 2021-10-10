#include <stdlib.h>
#include <stdbool.h>

double* bubbleSort(double* nums, size_t size) {
    for (int round = 0; round < size - 1; round++) {
        bool isSorted = true;

        for (int index = 0; index < size - round - 1; index++) {
            if (nums[index] > nums[index + 1]) {
                double buffer = nums[index];
                nums[index] = nums[index + 1];
                nums[index + 1] = buffer;
                isSorted = false;
            }
        }

        if (isSorted) {
            return nums;
        }
    }

    return nums;
}
