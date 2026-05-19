class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,1);
        left[0] = 1;
        for(int i=1;i<n;i++){
            left[i] = left[i-1]*nums[i-1];
        }
        int suff = 1;
        for(int i=n-1;i>=0;i--){
            left[i]*=suff;
            suff*=nums[i];
        }
        return left;
    }
};
