class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        
        vector<int> freq;
        for(auto it:mp) freq.push_back(it.second);
        sort(freq.begin(), freq.end());
                                       
        int elementsRemoved=0;
        for(int i=0;i<freq.size();i++){
            elementsRemoved+=freq[i];
            if(elementsRemoved>k) return freq.size()-i;
        }
            
        return 0;
    }
};