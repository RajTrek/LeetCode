#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // Needle cannot exist if it is longer than haystack
        if (n < m) {
            return -1;
        }

        // Only search up to the point where needle can still fit
        for (int i = 0; i <= n - m; i++) {
            // Optional optimization: check the first character before extracting
            if (haystack[i] == needle[0]) {
                if (haystack.substr(i, m) == needle) {
                    return i;
                }
            }
        }

        return -1;
    }
};