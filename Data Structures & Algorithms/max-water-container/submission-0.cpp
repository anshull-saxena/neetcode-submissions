class Solution {
public:
    int area(int first,int second,vector<int>& heights ){
        return (second-first)*min(heights[second],heights[first]);
    }

    int maxArea(vector<int>& heights) {
        int left = 0,right = heights.size()-1;
        int aer = 0;

        while(left<right){
        int temp = area(left, right, heights);
            aer = max(aer, temp);

            if(heights[left]<heights[right]){
                left++;
            }else right--;
        }
        return aer;
    }
};
