class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxx = INT_MIN;
        
        for(auto it: nums) {
            
            sum += it;
            
            maxx = max(maxx, sum);
            if(sum < 0)
                sum = 0;
        }
        return maxx;
    }
};
