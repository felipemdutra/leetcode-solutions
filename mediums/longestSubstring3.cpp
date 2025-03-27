#include <string>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int l = 0, maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
        while(seen.find(s[r]) != seen.end()) {
            seen.erase(s[l]);
            l++;
        }

        seen.insert(s[r]);
        maxLen = max(maxLen, r - l + 1);
    }

    return maxLen;
}

