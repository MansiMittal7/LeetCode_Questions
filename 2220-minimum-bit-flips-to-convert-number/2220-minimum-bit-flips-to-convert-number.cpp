class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ct=0;
        
        int ans=start^goal;
       
        for(int i=31;i>=0; --i){
            if((ans>>i) & 1 ) ct++;
        }
        
        return ct;
    }
};