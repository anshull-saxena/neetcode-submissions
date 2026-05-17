#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(pair<int,int> &c, pair<int,int> &d) {
        return c.first > d.first; 
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> out;

        for (int x : position) {
            out.push_back({x, 0});
        }

        int i = 0;
        for (int x : speed) {
            out[i].second = x;
            i++;   
        }

        sort(out.begin(), out.end(), cmp);

        vector<double> prcs;

        for(auto x:out){
            prcs.push_back((double)(target - x.first)/x.second);
        }
        
        int count = 0;
        double curr = 0; 

        for (double t : prcs) {
            if (t > curr) {
                count++;
                curr = t; 
            }
        }
    return count;
    }
};
