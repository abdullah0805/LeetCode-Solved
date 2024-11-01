#include <string>
#include <iostream>

class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int score = 1; 

        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] != s[i - 1]) {
                score = 1;  
                result += s[i];
            } else if (score < 2) {
                result += s[i];
                score++;
            }
        }

        return result;
    }
};