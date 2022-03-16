class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordCount = 0;
        
        for (int i = 0; i < sentence.size(); i++) {
                        
           
            if (i == 0 || sentence[i-1] == ' ') {
                wordCount++;
                int j = 0;
				
                while (sentence[i] == searchWord[j]) {
                    if (j == searchWord.size()-1) return wordCount;
                    i++;
                    j++;
                }
            }
        }
        return -1;
        
        
    }
};