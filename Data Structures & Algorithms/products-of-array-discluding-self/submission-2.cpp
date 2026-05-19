class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);

        left[0] = 1;
        for(int i=1;i<nums.size();i++){
            left[i] = left[i-1]*nums[i-1];
        }
        int n = nums.size();
        vector<int> res(n,1);

        for(int i=n-2;i>=0;i--){
            res[i] = res[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            res[i]= res[i]*left[i];
        }
        return res;
    }
};
