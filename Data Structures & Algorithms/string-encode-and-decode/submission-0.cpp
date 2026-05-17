class Solution {
public:

    string encode(vector<string>& strs) {
        string out="";
        for(string s:strs){
            for(char c:s){
                c++;
                out+=c;
            }
            out+='#';
        } 
        return out;
    }

    vector<string> decode(string s) {
        vector<string> out;
        string prcs;
        int i  = 0;
        for(char ss:s){
            if(ss!='#'){
            prcs+=(--ss);
            }else {
            out.push_back(prcs);
            prcs = "";
            i++;
            }
        }
        return out; 
    }
};
