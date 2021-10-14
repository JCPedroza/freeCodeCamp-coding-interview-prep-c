double* insertionSort(double* nums, int size) {
    for (int pivot = 1; pivot < size; pivot++) {
        int index = pivot;

        // Swap until left portion is ordered or end of array is reached
        while (nums[index] < nums[index - 1] && index > 0) {
            double buffer = nums[index];
            nums[index] = nums[index - 1];
            nums[index - 1] = buffer;
            index--;
        }
    }

    return nums;
}
