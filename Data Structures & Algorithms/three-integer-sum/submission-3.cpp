class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> out;
       
        for(int i = 0;i<nums.size()-2;i++){

        if(i>0 && nums[i]==nums[i-1]) continue;
         int leftIdx=i+1,rightIdx=nums.size()-1,sum=0;
            while(leftIdx<rightIdx){
             sum = nums[i]+nums[leftIdx]+nums[rightIdx];
             if(sum<0 ){
                leftIdx++;
             }else if(sum>0){
                rightIdx--;
                 }else{
                out.push_back({nums[leftIdx],nums[i],nums[rightIdx]});
               while (leftIdx < rightIdx && nums[leftIdx] == nums[leftIdx + 1]) leftIdx++;
               while (leftIdx < rightIdx && nums[rightIdx] == nums[rightIdx - 1]) rightIdx--;

               leftIdx++;rightIdx--;
            }
         }
        } 

        return out;       
    }
};
