class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> hash(256, -1);
        int maxLen = 0, left = -1;

        for(int right = 0; right < s.size(); right++){

            if(hash[s[right]] >= left)
                left = hash[s[right]];

            maxLen = max(maxLen, right-left);
            hash[s[right]] = right;

        }

        return maxLen;

    }

};
