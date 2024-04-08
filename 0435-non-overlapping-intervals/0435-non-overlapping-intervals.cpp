bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         int ans=-1;
         sort(intervals.begin(),intervals.end(),comp); //sorting by ending time
        vector<int> prev=intervals[0];
        
        for(vector<int>interval : intervals){
            if(interval[0]<prev[1])
                ans++; //we dont update previous, because i[1] will be grater then prev[1]
            else
                prev=interval;// we want the end point to be minimum
        }
        return ans; //ans was initially made -1 because our prev and intervals[0] will always match
    }
};

