class Solution {
public:
    struct pathData {
    int totalLen;
    int depth;
    pathData(int t, int d) : totalLen(t), depth(d) {}
};
    int lengthLongestPath(string input) {
         
        stack<pathData> filesys;
        int i = 0, answer = 0;
        
        while (i < input.size()) {
            int fileDirLen = 0, depth = 0;
            bool isFile = false;
            
            while (i < input.size() && input[i] == '\t') {
                ++depth;
                ++i;
            } 
            while (i < input.size() && input[i] != '\n') {
                ++fileDirLen;
                if (input[i] == '.') {
                    // Becase I find a '.', this is a file.
                    isFile = true;
                }
                ++i;
            } 
            ++i;
            
           
            while (!filesys.empty() && filesys.top().depth >= depth) {
                filesys.pop();
            }
            
            if (isFile == false) {
                // This is a directory append a '/'. 
                ++fileDirLen;
            }
            
            if (filesys.empty()) {
                
                filesys.push({fileDirLen, depth});
            } else {
               
                filesys.push({filesys.top().totalLen + fileDirLen, depth});
            }
            
            if (isFile == true) {
              
                answer = max(answer, filesys.top().totalLen);
            }
        } // end of while-loop
        
        return answer;
    }
};