class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        if(nums.size() == 1 && k == 1){
            return nums[0];
        }
        std::priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long score = 0;
        for(int i = 0;i < k;i++){
            long double top = maxHeap.top();
            score += top;
            maxHeap.pop();
            long long newval = ceil((top / float(3)));
            maxHeap.push(newval);
        }
        return score;
    }
};


