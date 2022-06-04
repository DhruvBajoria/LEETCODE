class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>q;
        for(int i=0;i<students.size();i++)
        {
            q.push(students[i]);
        }
     for(int i=sandwiches.size()-1;i>=0;i--)
    {
        st.push(sandwiches[i]);
    }
        int reject=0;
        while(!q.empty())
        {
            if(st.top()==q.front())
            {
                reject=0;
                st.pop();
                q.pop();
            }
            else
            {
                reject++;
                int a=q.front();
                q.pop();
                q.push(a);
            }
            if(reject==st.size())
                return reject;
        }
   return 0;

    }
};