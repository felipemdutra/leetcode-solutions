#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, int> mp;

    for (int i = 0; i < s.size(); ++i) {
        mp[s[i]]++;
        mp[t[i]]--;
    }

    for (auto [c, count] : mp) {
        if (count != 0)  return false;
    }

    return true;
}

