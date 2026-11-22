int minOperations(int* nums, int numsSize, int k) {
    int sum=0,a;
    for(int i=0;i<numsSize;i++){
        sum=sum+nums[i];
    }
   a=sum%k;
   return a;
}