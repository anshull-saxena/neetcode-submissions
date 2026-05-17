class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int len = temperatures.size();
        stack<int>prcs;prcs.push(0);
        vector<int> out(len,0);

        for(int i=0;i<len;i++){
            int temp = i+1;
            while(temp<len && temperatures[temp]<=temperatures[i]){
                temp++;
            }
            
            if(temp!=len){
                out[i]=temp-i;
            }
        }
        return out;
    }
};
