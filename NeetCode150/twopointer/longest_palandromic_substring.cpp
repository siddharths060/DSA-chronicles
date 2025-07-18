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
/*
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 0;
        int start = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j)) {
                    if (j - i + 1 > maxLen) {
                        maxLen = j - i + 1;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};

int main() {
    Solution sol;
    string s = "babad";
    cout << "Longest Palindromic Substring: " << sol.longestPalindrome(s) << endl;
    return 0;
}


*/