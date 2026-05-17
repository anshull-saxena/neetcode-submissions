class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> prcs;
        int n = temperatures.size();
        vector<int> out(n, 0);

        for (int i = 0; i < n; i++) {
            while (!prcs.empty() && temperatures[prcs.top()] < temperatures[i]) {
                int idx = prcs.top();
                prcs.pop();
                out[idx] = i - idx;
            }
            prcs.push(i);
        }
        return out;
    }
};
