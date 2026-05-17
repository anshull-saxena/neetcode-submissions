class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st; 
        int len = temperatures.size();
        vector<int> out(len,0);

        for(int i=0;i<len;i++){
            while(i<len && !st.empty() && temperatures[i] > temperatures[st.top()]){
                out[st.top()] = i-st.top();
                st.pop();
            }

            st.push(i);
        }
        return out;
    }
};
