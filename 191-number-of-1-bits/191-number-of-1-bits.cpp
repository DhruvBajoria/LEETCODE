class Solution {
public:
    int hammingWeight(uint32_t n) {
      bitset<32>b(n);
    int count=0;
    for(int i=0;i<32;i++){
    if(b[i]&1) count++;
    }
    return count;
        
    }
};