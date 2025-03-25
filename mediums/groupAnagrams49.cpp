#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

void sortChars(vector<char>& chars) {
     
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> seen;
    vector<vector<string>> groupedAnagrams;

    for (auto& s : strs) {
        string key = s;
        std::sort(key.begin(), key.end());
        seen[key].push_back(s);
    }

    for (auto [key, vector] : seen) {
        groupedAnagrams.push_back(vector);
    }

    return groupedAnagrams;
}

