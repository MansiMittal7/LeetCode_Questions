class Solution {
private:
   int minIdx(vector<int>&v)
    {
        int n = size(v);
        int l = 0, h = n-1, md;
        if(v[l] <= v[h]) return 0;
        while(h >= l){
            md = l + (h-l)/2;
            int prev = (md-1+n)%n;
            int next = (md+1)%n;
            if((v[md] < v[prev]) && (v[md] < v[next])) return md;
            if(v[md] >= v[0]) l = md + 1;
            else h = md - 1;
        }
        return 0;
    }
    int bs(vector<int>&v,int st,int ed,int k)
    {
        int l = st, h = ed, md;
        while(h >= l){
            md = l + (h-l)/2;
            if(v[md] == k) return md;
            else if(v[md] > k) h = md - 1;
            else l = md + 1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int idx = minIdx(nums), n = size(nums);
        int st = idx, ed = n-1;
        int ans = bs(nums,st,ed,target);
        if(ans == -1){
            st = 0, ed = idx-1;
            ans = bs(nums,st,ed,target);
        }
        return ans;
    }
};
        
        //liner Search O(n)
        // int ans=-1;
        // for(int i=0; i<nums.size(); i++){
        //    if(nums[i]==target) ans=i;
        //        // return {i};
        //     // else return {-1};
        // }
        // return ans;