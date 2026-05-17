class Solution {
public:
static bool cmp(pair<int,int> &a, pair<int,int> &b){
            return a.second > b.second;
        }
      
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> raw;
        vector<int> out;

        for(int x :nums){
            raw[x]++ ;
        }

        vector<pair<int,int>> prcs(raw.begin(),raw.end());
        sort(prcs.begin(),prcs.end(),cmp);

        for(int i = 0;i < k;i++){
            out.push_back(prcs[i].first);
        }
        return out ;
    }
};
