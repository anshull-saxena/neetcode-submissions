class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        string prcs = "";

        for(char c:s){
            if(isalnum(c)){
                prcs+=tolower(c);
            }
        }

        int i = 0,j=prcs.length()-1;

        while(i<j){
            if(prcs[i]==prcs[j]){
                i++;j--;continue;
            }else return false;
        }
        cout<<prcs<<endl;
        return true;

    }
};
