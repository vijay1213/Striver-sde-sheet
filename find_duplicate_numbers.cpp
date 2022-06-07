class Solution {
public:
int findDuplicate(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	return *adjacent_find(nums.cbegin(), nums.cend());
}
};
// int findDuplicate(vector<int>& nums) {
// 	sort(nums.begin(), nums.end());
// 	return *adjacent_find(nums.cbegin(), nums.cend());
// }
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < n; i++) {
            if(nums[i]==nums[i+1]) {
                return nums[i+1];
            }
        }
        return 0;
        
    }
};
