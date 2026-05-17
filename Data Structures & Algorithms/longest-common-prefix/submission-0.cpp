class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = INT_MAX;
        string smol;
        for(string s : strs){
            if(s.size()<len){
                len = s.size();
                smol = s;
            }
        }

string out;
        for(int i=0;i<smol.size();i++){
            char c = smol[i];

            for(string s:strs){
                if(s[i]!=c){
                    return out;
                }
            }
            out.push_back(c);
        }
        return out;
    }
};