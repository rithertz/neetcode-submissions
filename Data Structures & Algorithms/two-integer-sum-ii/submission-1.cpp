class Solution {
public:
    vector<int> sortedTwoSum(vector<int> &nums, int l, int r, int target){
        if(l >= r){
            return {};
        }
        int sum = nums[l] + nums[r];
        if(sum == target){
            return {l + 1, r + 1};
        }
        else if(sum > target){
            return sortedTwoSum(nums, l, r - 1, target);
        }
        else{
            return sortedTwoSum(nums, l + 1, r, target);
        }
        return {};
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        return sortedTwoSum(numbers, 0, numbers.size() - 1, target);
    }
};
