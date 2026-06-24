class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "";
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z'){
                str.push_back(s[i]);
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                str.push_back((s[i]-'A')+'a');
            }

        }

        int i = 0, j = str.size()-1;
        while(i < j){

            if(str[i] != str[j]) return false;
            i++, j--;

        }

        return true;
    }
};
