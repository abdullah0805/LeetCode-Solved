#include <vector>
#include <iostream>

class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<char> letters;
        int words = 0;
        for(int i = 0;sentence[i] != '\0';i++){
            if(i == 0){
                letters.push_back(sentence[i]);
            }
            else if(sentence[i] == ' '){
                letters.push_back(sentence[i - 1]); 
                letters.push_back(sentence[i + 1]);     
                words++;          
            }
            else if(sentence[i+1] == '\0'){
                letters.push_back(sentence[i]);
                words++;
            }
        }
        if(letters[0] != letters[letters.size() - 1]){
            return false;
        }
        for(int i = 0;i < letters.size();i+=2){
            if(i + 2 < letters.size() && letters[i + 1] != letters[i + 2]){
                return false;
            }
        }
        return true;
    }
};