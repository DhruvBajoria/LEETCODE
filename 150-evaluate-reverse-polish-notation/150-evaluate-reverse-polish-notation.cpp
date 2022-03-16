class Solution {
public:
   
    int evalRPN(vector<string>& tokens) {
    stack<int>s;
        for(auto str:tokens){
		// if we get any number push into the stack
            if(str!="+" and str!="-" and str!="*" and str!="/"){
                s.push(stoi(str));
            }
			// if it is operator pop 2 elements and perform the required operation
			// and push the result to the stack
            else if(str=="+"){
                int num1=s.top();s.pop();
                int num2=s.top();s.pop();
                s.push(num1+num2);
            }
            else if(str=="-"){
                int num1=s.top();s.pop();
                int num2=s.top();s.pop();
                s.push(num2-num1);
            }
            else if(str=="*"){
                int num1=s.top();s.pop();
                int num2=s.top();s.pop();
                s.push(num1*num2);
            }
            else{
                int num1=s.top();s.pop();
                int num2=s.top();s.pop();
                s.push(num2/num1);
            }
        }
		// at last stack top will contains the answer
        return s.top();
        
    }
};