#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    string newString = "";
    for (auto& c : s) {
        if (isalnum(c)) {
            newString += tolower(c);
        };
    }

    int i = 0, j = newString.size() - 1;
    while (i <= j) {
        if (newString[i] != newString[j]) {
            return false; 
        }

        i++;
        j--;
    }
    
    return true; 
}

