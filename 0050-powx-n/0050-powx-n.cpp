class Solution {
private:
    double power(double x,long long int n){
        if(n==0) return 1;
        
        double ans=power(x,n/2);
        if(n%2==0) return ans*ans;
        return x*ans*ans;ans=power(x,n);
    }
    public:
    double myPow(double x, int n) {
        double ans;
        if(n>=0)
        ans=power(x,n);
        else
        ans=1/power(x,-1LL*n);
        return ans;
    }
};