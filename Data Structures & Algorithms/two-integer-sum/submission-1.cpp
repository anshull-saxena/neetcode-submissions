class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ct;  
        vector<int> out;
        for(int i = 0; i < nums.size(); i++){
            if(ct.find(target - nums[i]) != ct.end()){
                out.push_back(ct[target - nums[i]]);
                out.push_back(i);
                return out;
            } else {
                ct[nums[i]] = i;  
            }
        }
        return out;
    }
};
