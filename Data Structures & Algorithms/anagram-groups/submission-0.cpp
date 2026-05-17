class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,int>> vec;
        
        for (int i = 0; i < strs.size(); i++) {
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            vec.push_back({sorted, i});
        }

        sort(vec.begin(), vec.end());

        vector<vector<string>> out;
        out.push_back({strs[vec[0].second]}); 

        for (int i = 1; i < vec.size(); i++) {
            if (vec[i].first == vec[i-1].first) {
                out.back().push_back(strs[vec[i].second]);
            } else {
                out.push_back({strs[vec[i].second]});
            }
        }

        return out;
    }
};
