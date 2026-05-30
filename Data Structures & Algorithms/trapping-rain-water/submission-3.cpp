class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMin(n,0),rightMin(n,0);

        int l = 0,r=0;
        for(int i=0;i<n;i++){
            l = max(l,height[i]);
            leftMin[i] = l;
            r = max(r,height[n-i-1]);
            rightMin[n-i-1] = r;
        }

        int res = 0;
        for(int i=0;i<n;i++){
            res += min(leftMin[i],rightMin[i]) - height[i];
        }
        return res;

    }
};
