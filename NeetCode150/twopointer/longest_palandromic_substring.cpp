class Solution {
public:
    string longestPalindrome(string s) {
        int max_count = 0;
        string res = "";
        for(int i =0; i < s.size(); i++){
            // odd length
            int l = i, r = i;
            while(l >= 0 && r <= s.size() && s[l] == s[r])
            {
                // means it is a palindrome
                if(r - l + 1 > max_count){
                    res = s.substr(l,r-l+1);
                    max_count = r - l + 1;
                }
                l--;
                r++;
            }
            // even length 
            l = i, r = i+1;
            while(l >= 0 && r <= s.size() && s[l] == s[r]){
                if(r - l + 1 > max_count){
                    res = s.substr(l,r-l+1);
                    max_count = r - l +1;
                }
                l--;
                r++;
            }
        }
        return res;
    }
};