class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //using sort
        if(nums.empty())    return false;
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;

        //using map
        // unordered_map<int,int> count;

        // for(int i=0;i<nums.size();i++){
        //     count[nums[i]]++;
        //     if(count[nums[i]] > 1){
        //         return true;
        //     }
        // }  
        // return false;
        
    }
};