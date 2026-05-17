class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> c;
        pair<int,int> major = {INT_MIN,INT_MIN};
        for(int s: nums){
             if(c[s]>major.first) {
                major.second = s;
                major.first = c[s];
            }
             c[s]++;
             }
             return major.second;
    }
};