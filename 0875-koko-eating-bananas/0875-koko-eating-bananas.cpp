class Solution {
//    int findMax(vector<int> &v) {
//     int maxi = INT_MIN;
//     int n = v.size();
//     //find the maximum:
//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, v[i]);
//     }
//     return maxi;
// }


long long int calculateTotalHours(vector<int> &v, int hourly) {
   long long int totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}
    
public:
   long long int minEatingSpeed(vector<int>& v, int h) {
      long long int low = 1;
      // int high = findMax(v);
        long long int high  = *max_element(v.begin(),v.end());

      while (low <= high) {
        long long int mid = low + (high-low) / 2;
         long long int totalH = calculateTotalHours(v, mid);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
    
    
    //second alternative solution 

//     int calHours(vector<int>& piles, int k)
//     {
//         int sum=0; 
//         for (auto p: piles)
//         {
//             sum+=p/k;
//             if (p%k!=0)
//                 sum++;
//         }
//         return sum; 
//     }
// public:
//     int minEatingSpeed(vector<int>& piles, int H) {
//         // left and right bounds for how many to eat
//         // find smallest k so:  f(k)<=H 
//         // smallest k,  more hours (largest hours) <=H
//         int left=1, right=0; 
//         for (auto p: piles)  // max value is the max size of the piles.
//             right= max(right , p);
        
//         while (left <right)
//         {
//             int mid=left+ (right-left)/2;
//             int f_mid= calHours(piles, mid);
//             if (f_mid<=H)  //meeting the condition, we want to keep it
//                 right = mid;  // we want to have larger mid, search smaller K
//             else // H<f_mid , k too small, exceeding hours, search larger half
//                 left=mid+1; 
//         }
        
//         return left; 
    }
};