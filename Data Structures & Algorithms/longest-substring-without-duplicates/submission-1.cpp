class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i = 0, j = 0, len = 0;
        map<char, int>m;

        while(j < s.size()){

            //perform calculation for jth element.
            m[s[j]]++;

            //srink when substring becomes invalid
            while(m.size() < j-i+1){
                m[s[i]]--;
                if(m[s[i]] == 0) m.erase(s[i]);
                i++;
            }

            len = max(len, j-i+1);
            j++;
        }

        return len;
    }
};
