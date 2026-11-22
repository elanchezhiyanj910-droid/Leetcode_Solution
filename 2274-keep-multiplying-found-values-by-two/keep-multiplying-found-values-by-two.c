int findFinalValue(int* nums, int numsSize, int original) {
    int j=0;
    while(j!= numsSize)
    {
    for(int i=0;i<numsSize;i++){
        if(nums[i]==original){
            original=nums[i]*2;
        }
    }
    j++;
    }
    return original;
}