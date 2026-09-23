class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> check;
        for (int i =0; i <nums.size(); i ++){
            int diff = target - nums[i]; //find the difference between target and cur
            //check if diff exists in map, that means curr + diff = target
            if (check.find(diff) != check.end() && i != check[diff])
                return {check[diff], i};
            check[nums[i]] = i; //key = value, value = index
        }
        return {};
    }
};
