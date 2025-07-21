class Solution {
public:
    int characterReplacement(string s, int k) {
        // uppercase letters
        // can change only k characters
        // return the longest substring of 1 distinct after k replacements are done
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            unordered_map<char,int> count;
            int max_freq = 0;
            for(int j = i; j < s.size(); j++){
                count[s[j]]++;
                max_freq = max(max_freq,count[s[j]]);
                if((j -  i + 1) - max_freq <= k){
                    res = max(res,j -  i + 1 );
                }
                
            }
        }
        return res;
    }
};
