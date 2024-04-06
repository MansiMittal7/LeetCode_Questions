class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size(),fc=0,tc=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5) fc++;
            
            else if(bills[i]==10 ){
                if (fc>0){
                tc++;
                fc--;  
                } 
                else return false;
            }
            else if(bills[i]==20){
                if((fc>0 && tc>0)){
                fc--;
                tc--;  
                }
                else if (fc>=3) fc-=3;
                else return false;
            }
           
        }
        return true;
    }
};