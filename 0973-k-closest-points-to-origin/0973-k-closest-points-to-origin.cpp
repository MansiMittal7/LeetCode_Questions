class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
     int len=points.size();
        priority_queue<pair<float,pair<int,int>>> q;
        for(int i=0;i<len;i++){
            unsigned long long dis=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            float fdis=pow(dis,0.5);
            q.push({-1*fdis,{points[i][0],points[i][1]}});
            
        }
        vector<vector<int>> v;
        while(!q.empty() and K!=0){
            v.push_back({q.top().second.first,q.top().second.second});
            q.pop();
            K--;
        }
    return v;
        
    }
};