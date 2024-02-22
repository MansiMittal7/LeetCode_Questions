class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int> indegree(n+1,0), outdegree(n+1,0);
       
        for(auto it:trust){
            outdegree[it[0]]++;
            indegree[it[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 && outdegree[i]==0) return i;
        }
        return -1;
    }
};



//  map<int,int> mp;
//         map<int,int> mp1;
//         int ans=0;
//         for(int i=0;i<n;i++){
//             vector<int> temp=trust[i];
//             mp[temp[1]]++;
//             mp1[temp[0]]++;
//             // for(int i=0;i<2;i++) 
//         }
//         vector<int> temp;
//         for(auto it: mp){
//            if(it.second==n-1) temp.push_back(it.first); 
//         }
//         for(int i=0;i<temp.size();i++){
//             for(auto it: mp1){
//             if(mp1.find(temp[i])==mp1.end()){
//                 ans=temp[i];
//             } 
//            }
//         }
//         return ans;