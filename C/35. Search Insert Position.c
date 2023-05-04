int searchInsert(int *nums, int numsSize, int target)
{
    int inicio = 0, fim = numsSize - 1;
    int meio = 0;
    
    while(inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if(*(nums + meio) == target) return meio;
        
        else if(*(nums + meio) < target) inicio = meio + 1;

        else 
            fim = meio - 1;
    }

    return inicio;
}
