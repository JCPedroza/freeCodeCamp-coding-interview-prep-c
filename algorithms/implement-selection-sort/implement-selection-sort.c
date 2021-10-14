#include <math.h>

double* selectionSort(double* nums, int size) {
    for (int pivot = 0; pivot < size - 1; pivot++) {
        double minValue = INFINITY;
        int minIndex = -1;

        // Find the index of the minimul value
        for (int index = pivot; index < size; index++) {
            if (nums[index] < minValue) {
                minValue = nums[index];
                minIndex = index;
            }
        }

        // Swap the pivot with the minimum value
        double buffer = nums[pivot];
        nums[pivot] = minValue;
        nums[minIndex] = buffer;
    }

    return nums;
}
