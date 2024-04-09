class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> serial;
        // for(int i=0;i<tickets.size();i++) tickque.push_back(tickets[i]);
        for(int i=0;i<tickets.size();i++) serial.push(i);
        
        int ans=0; //time needed
        while(!serial.empty()){
            ans++;
            int indFront=serial.front();
            serial.pop();
            tickets[indFront]--;
            if(tickets[indFront]!=0) serial.push(indFront);
            
            if(k==indFront && tickets[indFront]==0) return ans;               
        }
        return ans;
    }
};