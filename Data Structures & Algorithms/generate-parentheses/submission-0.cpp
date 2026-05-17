class Solution {
public:
    void back(string curr,int open,int close, vector<string> &out){
    if(open==0 && close ==0){
        out.push_back(curr); 
        return;
    }

        if(open>0){
            back(curr+"(",open-1,close,out);
        }
         if(close>open){
            back(curr+")",open,close-1,out);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>out;
        back("",n,n,out);
        return out;
    }
};
