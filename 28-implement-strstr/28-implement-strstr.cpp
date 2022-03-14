class Solution {
public:
    int strStr(string haystack, string needle) {
      if(needle == "" && haystack == "") {
            return 0;
        }
        
         if(needle == "") {
            return 0;
        }
        //Finds the position of the needle
        int found = haystack.find(needle);
        
        //If it is found, return the index of occurrence else return -1
        if(found!= string::npos) {
            return found;
        } else {
            return -1;
        }  
    }
};