class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1;
        int sum=(n*(n-1))/2;
        int s=0;
        for (int val: nums)
        {
            s+=val;
        }
        return (sum-s);
    }
};