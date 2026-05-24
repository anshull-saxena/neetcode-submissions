class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());

        int n = nums.size();
        for(int i=0;i<n;i++){

            int l = 0,r = n-1;

            if(i > 0 && nums[i] == nums[i-1]) {
                if(i > 1 && nums[i-1] == nums[i-2]) continue;
                l = i - 1; 
            }

            while(l<i && r>i){

                int sum = nums[l]+nums[r];

                if(sum+nums[i]<0){
                    l++;
                }else if(sum+nums[i]>0){
                    r--; 
                }else if(sum+nums[i]==0){
                    res.push_back({nums[l],nums[i],nums[r]});
                    l++;
                    r--;
                while(l<i && nums[l]==nums[l-1]) l++;
                while(i<r && nums[r]==nums[r+1]) r--;
                }
            }
        }

        return res;
    }
};
