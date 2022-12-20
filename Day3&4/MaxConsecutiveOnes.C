
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    if(!nums)
        return -1;
    int count = 0;
    int max = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i])
        {
            count++;
            if(count > max)
                max = count;
        }
        else 
        {
            count = 0;
            if(max > numsSize/2)
                break;
        }
    }
    return max;
}
