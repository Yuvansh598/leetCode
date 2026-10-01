class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> set;
        int l = 0;
        int length = 0;
        for(int r = 0; r < s.size(); r++){
            while(set.count(s[r])){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            length = max(length, r-l+1);
        }
        return length;
    }
};