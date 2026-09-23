class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //create hash set from the vector nums
        //will only insert unique nums (repeated nums will hash to the same value)
        unordered_set <int> freq (nums.begin(), nums.end());
        
        //if freq is not equal to nums, then there are duplicates so freq will be less than nums, return true
        //if freq is equal to nums, then there are no duplicates, return false
        return (freq.size()!=nums.size());
    }
};