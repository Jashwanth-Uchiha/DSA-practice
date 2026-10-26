class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    int n = nums.size();
    if (n == 0) return result;
    
    int i = 0;
    while (i < n) {
        int start = i;
        
        while (i + 1 < n && nums[i+1] == nums[i] + 1) {
            i++;
        }
        int end = i;
        
        if (start == end) {
            result.push_back(to_string(nums[start]));
        } else {
            result.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
        }
        i++;  
    }
    return result;
}
};