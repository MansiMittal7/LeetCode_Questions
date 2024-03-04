class Solution {
    // int calc
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n=tokens.size(),scr=0,i=0,j=n-1, maxScore=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                i++;
                scr++;
                maxScore=max(maxScore,scr);
            }
            else if(scr>=1){ 
                power+=tokens[j];
                j--;
                scr--;
            }
            
            else break;
        }
        return maxScore;
    }
};