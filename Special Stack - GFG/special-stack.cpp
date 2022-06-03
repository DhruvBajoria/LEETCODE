// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
    if(s.size()==0)
    s.push(a);
    else{
        int p=s.top();
        s.pop();
        int aa=min(p,a);
        int bb=max(p,a);
        s.push(bb);
        s.push(aa);
    }
	// Your code goes here
}

bool isFull(stack<int>& s,int n){
    return s.size()==n;
	// Your code goes here
}

bool isEmpty(stack<int>& s){
    return s.size()==0;
	// Your code goes here
}

int pop(stack<int>& s){
    if(s.size()!=0)
    {
        int a=s.top();
        s.pop();
        return a;
    }
return -1;	// Your code goes here
}

int getMin(stack<int>& s){
    return s.top();
	// Your code goes here
}