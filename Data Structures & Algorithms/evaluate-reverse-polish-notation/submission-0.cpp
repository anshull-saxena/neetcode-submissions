class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> st;
       int n = tokens.size();

       for(string s: tokens){
        if(s!= "-" && s!="/" && s!="*" && s!="+"){
            st.push(stoi(s));
        }else {
            int temp1 = (int)st.top();
            st.pop();
            int temp2 = (int)st.top();
            st.pop();

            if(s=="+"){
                st.push(temp1+temp2);
            }else if(s=="/"){
                st.push(temp2/temp1);
            }else if(s=="*"){
                st.push(temp2*temp1);
            }else st.push(temp2-temp1);
        }
       } 
       return st.top();
    }
};
