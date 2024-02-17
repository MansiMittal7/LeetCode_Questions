class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n= heights.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n-1;i++){
          int temp=heights[i+1]-heights[i];
          if(temp>0) pq.push(temp);
          if(pq.size()>ladders){
              bricks-=pq.top();
              pq.pop();
          }
          if(bricks<0) return i;
        }
        return heights.size()-1;
    }
};




// int ans=0;
//         for(int i=0;i<n-1;i++){
//             int temp=heights[i+1]-heights[i];
//             if(heights[i]>=heights[i+1]){  // no dikkat 
//                ans+=1; 
//             }
//             else { //heights[i]<heights[i+1]
//                 if(ladders==0 && temp>bricks) break;
//                 else{
//                     if( temp < bricks ) bricks-=temp;
//                     else ladders--;
//                 ans +=1;
//                 }              
//             }
//         }
//         return ans;