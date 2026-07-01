class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        
        int n = heights.size();
        stack<int>s;
        vector<int>ans;

        for(int i = n-1; i >= 0; i--){
            
            while(s.size() && s.top() < heights[i]){
                s.pop();
            }

            if(s.empty()) ans.push_back(i);
            else continue;
            s.push(heights[i]);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};