class Solution {
public:
    int rob(vector<int>& nums) {
        int twoBack = 0;
        int oneBack = 0;

        for (int money : nums) {
            int current = max(oneBack, twoBack + money);
            twoBack = oneBack;
            oneBack = current;
        }

        return oneBack;
    }
};