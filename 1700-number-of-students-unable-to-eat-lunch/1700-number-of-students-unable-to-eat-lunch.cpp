class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int n=students.size();
        queue<int>student;
        stack<int>sandwich;
        
        for(int i=0;i<n;i++){
            sandwich.push(sandwiches[n-i-1]);
            student.push(students[i]);
        }
        int sandwichesMissed=0;
        while(!student.empty()){
            if(sandwich.top()==student.front()){
                sandwich.pop();
                student.pop();
                sandwichesMissed=0;
            }
            
            else{
                student.push(student.front());
                student.pop();
                sandwichesMissed++;
                if(sandwichesMissed==student.size()) break;
            }
        }
        return sandwichesMissed;
    }
};