#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        // return true if palindrome else return false
        //check for palindrome only for alpha numeric characters
        // so basically remove spaces and other non alphanumeric characters then check for palindrome
        // it is also case insensitive, that means convert all to lower case
       int left = 0, right = s.size() -1;
       while(left < right){
        // move left pointer if it is not an alpha numeric character
        while(left < right && !isalnum(static_cast<unsigned char> (s[left])))
        {
            left++;
        }
			 // move right pointer if it is not an alpha numeric character
        while(left < right && !isalnum(static_cast<unsigned char> (s[right]))){
            right--;
        }
        // incase the pointers have crossed or is equal then we need to break
        if(left >= right){
            break;
        }
        //check the equality of the pointers
        if(tolower(static_cast<unsigned char>(s[left])) != tolower(static_cast<unsigned char>(s[right])))
        {
            return false;
        }
        left++;
        right--;
       }
       return true;
    }
};
// time complexity : O(N) space complexity : O(1)
