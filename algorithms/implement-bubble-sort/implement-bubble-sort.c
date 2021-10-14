double* bubbleSort(double* nums, int size) {
    for (int round = 0; round < size - 1; round++) {
        for (int index = 0; index < size - round - 1; index++) {
            if (nums[index] > nums[index + 1]) {
                double buffer = nums[index];
                nums[index] = nums[index + 1];
                nums[index + 1] = buffer;
            }
        }
    }

    return nums;
}
