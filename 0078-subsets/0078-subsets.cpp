class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index, vector<int>& temp) {
        // Base case
        if (index == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Choice 1: Include nums[index]
        temp.push_back(nums[index]);
        solve(nums, index + 1, temp);

        // Backtrack
        temp.pop_back();

        // Choice 2: Exclude nums[index]
        solve(nums, index + 1, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;

        solve(nums, 0, temp);

        return ans;
    }
};