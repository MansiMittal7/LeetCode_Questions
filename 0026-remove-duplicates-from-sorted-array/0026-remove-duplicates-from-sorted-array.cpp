class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0 || nums.size() == 1)
		return nums.size();
        
        int i=0;
        
        for(int j=1;j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        int a=i+1;
        return a; 
          }
    
    
    };

        

        
	
   

//          return v;
//         vector<int> v;
        
//         // ans.push_back(nums[0]); 
//                     int a=0;
        
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i]!=nums[i-1]) 
        //     return nums[i];
//             v.push_back(nums[i]);
//             else if (nums[i]==nums[i-1])
//            a=a+1;




 // else if(nums[i]==nums[i-1]) v.push_back('_');
// int a=( nums.size()-v.size() );
        
        // cout<<a<<','<<ans<<','<<v;
        // for(int i=0; i<v.size(); i++) return v[i];
//code
 // set<int> st;
 //        for(int i=0;i<nums.size(); i++){
 //            st.insert(nums[i]);
 //        }
 //        int index=0; 
 //        for(auto it:st){
 //            nums[index]=it;
 //            index++;
 //        }
 //         return index;