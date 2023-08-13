class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> m;
        for(vector<int> v: trips){
            int start = v[1];
            int end =v[2];
            m[start]+=v[0];
            m[end]-=v[0];
        }
        
        int sum = 0;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            sum+= it-> second;
            if(sum>capacity) return false;
         }
        return true;
    }
};