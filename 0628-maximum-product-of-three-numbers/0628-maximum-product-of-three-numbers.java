class Solution {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int a = nums[n-1]*nums[n-2]*nums[n-3];
        int b = nums[0]*nums[1]*nums[n-1];
        int c = nums[0]*nums[n-2]*nums[n-1];
        if(a>b && a>c) return a;
        else if(b>c) return b;
        return c;
    }
}