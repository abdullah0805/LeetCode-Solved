class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int arr[24];
        if(candidates.size() == 1){
            return 1;
        }
        for(int c = 0;c < candidates.size();c++){
            for (int i = 23; i >= 0; i--) {
                int k = candidates[c] >> i;
                if (k & 1)
                    arr[i] += 1;
                else
                    arr[i] += 0;
            }
        }
        int max = 0;
        for(int i = 0;i < 24;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};