#include <string>

using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0;

    for (int j = 0; j < t.size(); ++j) {
        if (s[i] == t[j]) {
            i++;
        }
    }

    if (i < s.size()) {
        return false;
    }
    
    return true;
}

