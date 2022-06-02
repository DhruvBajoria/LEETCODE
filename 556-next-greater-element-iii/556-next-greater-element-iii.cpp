class Solution {
public:
    int nextGreaterElement(int n) {
       auto a=to_string(n);
        next_permutation(begin(a),end(a));
      auto b=stoll(a);
        return (b>INT_MAX||b<=n)?-1:b;
        
    }
}; 
