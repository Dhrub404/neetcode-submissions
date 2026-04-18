class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int s = i+1;
            int e = nums.size() - 1;
            int sum = 0;
            while (s < e) {
                sum = nums[i] + nums[e] + nums[s];

                if (sum < 0) {
                    s++;
                } else if (sum > 0) {
                    e--;
                } else {
                    ans.push_back({nums[i], nums[s], nums[e]});
                    s++;
                    e--;
                    while (s < e && nums[s] == nums[s - 1]) s++;
                    while (s < e && nums[e] == nums[e + 1]) e--;
                }
                
            }
        }
        return ans;
    }
};