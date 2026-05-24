class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char &c:s){
            if(c>='a' && c<='z') temp+=c;
            else if(c>='A'&&c<='Z')temp+=c+32;
            else if(c>='0'&&c<='9')temp+=c;
        }

        cout<<temp<<endl;
        bool ans = false;

        int i=0,j=temp.length()-1;
        while(i<=j){
            if(temp[i]==temp[j]){
                i++;j--;
            }else return false;
        }
        return true;
    }
};
