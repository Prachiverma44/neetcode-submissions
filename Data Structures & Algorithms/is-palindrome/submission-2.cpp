class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "";
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] >= '0' && s[i] <= '9'){
                str.push_back(s[i]);
            }
            else if(s[i] >= 65 && s[i] <= 90){
                str.push_back((s[i]-'A')+'a');
            }
            else if(s[i] >= 97 && s[i] <= 122){
                str.push_back(s[i]);
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
