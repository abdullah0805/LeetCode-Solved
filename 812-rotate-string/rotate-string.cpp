class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string bigs = s + s;
        if(bigs.find(goal) != -1)
            return true;
        else
            return false;
    }
};