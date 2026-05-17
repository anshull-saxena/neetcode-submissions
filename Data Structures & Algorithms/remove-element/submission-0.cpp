class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = nums.size();
        for(int x:nums){
            if(x==val) {
                cnt--;
            }
        }
        remove(nums.begin(), nums.end(), val);
        return cnt;
    }
};