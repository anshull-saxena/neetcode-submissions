class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int rw = 1;map<int,int> ct;
        for(auto x : nums) {
            ct[x]++;
            if(x!=0) rw*=x;
        }

        if(ct[0]==1){
            int ctt;
            for(int i = 0;i<nums.size();i++){
                if(nums[i]==0){
                    ctt = i;
                    break;
                }
            }

        vector<int> out(nums.size(),0);
        out[ctt] = rw;
        return out;
        }else if(ct[0]>1){
          vector<int> out(nums.size(),0);
          return out;
        } else{
            vector<int> out(nums.size(),rw);
            for(int i = 0;i<nums.size();i++){
                out[i]/=nums[i];
            }
            return out;
        }
    
    }
};
