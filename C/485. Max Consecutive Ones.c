int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int auxiliary = 0;
    int cont = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            cont++;
            if (cont > auxiliary) {
                auxiliary = cont;
            }
        } else {
            cont = 0;
        }
    }
    return auxiliary;
}
