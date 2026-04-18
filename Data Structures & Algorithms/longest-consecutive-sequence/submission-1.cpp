class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute force
        if(nums.empty())    return 0;
        int count = 1;
        sort(nums.begin(), nums.end());
        int ans  = 1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            if(nums[i] + 1 == nums[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans ,count);
        }
        return ans;
    }
};
