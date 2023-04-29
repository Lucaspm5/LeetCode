int* runningSum(int* nums, int numsSize, int* returnSize){

    int *soma = NULL;
    soma = (int*)malloc(numsSize * sizeof(int));

    *(soma + 0) = *(nums + 0);

    int i = 1;

    for(i = 1;i < numsSize;i++){
        *(soma + i) = *(soma + i - 1) + *(nums + i);
    }

    *returnSize = i ;

    return soma;
}
