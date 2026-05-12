class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int>ans;

        // for(int i = 0; i < nums.size(); i++){
        //     ans.push_back(nums[i]);
        // }

        // for(int i = 0; i < nums.size(); i++){
        //     ans.push_back(nums[i]);
        // }

        int n = nums.size();

        for(int i = 0; i < n; i++){
            nums.push_back(nums[i]);
        }

        return nums;
    }
};