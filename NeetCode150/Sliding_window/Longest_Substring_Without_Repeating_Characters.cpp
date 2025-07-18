#include<iostream>
#include<set>
#include<vector>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // dynamic sliding window
        // return the length of longest substring
        // with out duplicate maybe use a set? 
        set<char> st;
        int left = 0, right = 0;
        int length = 0, max_length = 0;
        
        while(right < s.length()){
            
            // if element not found in the set then right++, update length = right - left + 1
            // we need to remove the characters from the set till the duplicate element is found, hence the  loop
            while(st.find(s[right]) != st.end()){
                  st.erase(s[left]);
                left++;

              
                
            }
            // insert the element cal length and max leng then increment right pointer
            st.insert(s[right]);
            length = right - left + 1;
            max_length = max(max_length,length);
            right++;

        }
        return max_length;
    }
};
