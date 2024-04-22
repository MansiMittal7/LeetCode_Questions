class StockSpanner {
public:
   public:
   stack<pair<int,int>> s;
    StockSpanner() {        
    }
    
    int next(int price) {
       int cnt = 1;
         while(s.size() && s.top().first<=price){
             cnt+= s.top().second;
             s.pop();
         }
       s.push({price,cnt});
       return  cnt;
    }
};

// public:
//     StockSpanner() {    }
    
//     int next(int price) {
	
//            // as shown in during Dry run on sample input
				
//     }


// stack< <int,int> > s;
// stack<pair<int,int>> s;
// 	int d = 0;
// public:
// 	StockSpanner() {

// 	}

// 	int next(int p) {
// 		d++;
// 		int ans = 0;
// 		while(!s.empty() && s.top().first<=p) s.pop();
// 		if(s.empty()) ans = d;
// 		else ans = d-s.top().second;
// 		s.push({p,d});
// 		return ans;
// 	}





