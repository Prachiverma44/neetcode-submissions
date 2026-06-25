class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        map<int,bool>m;

        for(int i = 0; i < n; i++){
            m[nums[i]] = 1;
        }

        int i = 0, size = m.size();
        for(auto &it : m){
            nums[i++] = it.first;
        }

        return size;

        
    }
};