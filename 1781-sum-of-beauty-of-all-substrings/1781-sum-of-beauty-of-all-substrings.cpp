class Solution {
    int beauty(vector<int> & alpha){
        int mf=-1;//mostfrequent
        int lf=1e9;//leastfrequent
        
        for(int i=0;i<26;i++){
            mf=max(mf,alpha[i]);
            if(alpha[i]>=1) lf=min(lf,alpha[i]);
        }
        return mf-lf;
    }
public:
    int beautySum(string s) {
        
        int res=0, n=s.size();
        for(int i=0;i<n;i++){
            vector<int>alpha(26,0);
            for(int j=i;j<n;j++){
                alpha[s[j]-'a']++;
                res=res+beauty(alpha);
            }
        }
        return res;
    }
};