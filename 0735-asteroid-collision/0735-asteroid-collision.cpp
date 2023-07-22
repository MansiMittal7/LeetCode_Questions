class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;
        for (int ast: asteroids) {
            bool add = true;
            while (!st.empty() && ast < 0 && st.top() > 0) {
                if (st.top() < -ast) {
                    st.pop();
                } else {
                    if (st.top() == -ast)
                        st.pop();
                    add = false;
                    break;   
                }
            }
            if (add)
                st.push(ast);
        }
        int size = st.size();
        vector<int> res(size);
        while (!st.empty()) {
            res[--size] = st.top();
            st.pop();
        }
        return res;
    }
};