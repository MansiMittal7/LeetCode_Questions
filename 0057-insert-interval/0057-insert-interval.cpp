class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int st=newInterval[0], en=newInterval[1],i=0,n=intervals.size();
        
        while(i<n && intervals[i][1]<st){
            ans.push_back(intervals[i]);
            i++;
        }
        
        vector<int>mergedIntervals={st,en};
        while(i<n && intervals[i][0]<=en){
            mergedIntervals[0]=min(mergedIntervals[0],intervals[i][0]);
            mergedIntervals[1]=max(mergedIntervals[1],intervals[i][1]);
            i++;
        }
        ans.push_back(mergedIntervals);
        
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};