/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
   public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](Interval a, Interval b) { return a.start < b.start; });
        int rooms = 0;
        int i = 0, j = 0;
        int ans = 0;
        vector<int> endTime;

        for (auto& d : intervals) endTime.push_back(d.end);
        sort(endTime.begin(), endTime.end());

        while (i < intervals.size() && j < intervals.size()) {
            if (intervals[i].start < endTime[j]) {
                i++;
                rooms++;
                ans = max(ans, rooms);
            } else {
                rooms--;
                j++;
            }
        }
        return ans;
    }
};
