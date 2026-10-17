class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if (numRows == 1 || numRows >= n) {
            return s;
        }

        vector<string> say(numRows);   // one string per row
        int index = 0;                 // next character of s to place

        while (index < n) {
            // go DOWN: rows 0 .. numRows-1
            for (int i = 0; i < numRows && index < n; i++) {
                say[i].push_back(s[index++]);
            }
            // go UP: rows numRows-2 .. 1 (top and bottom are not repeated)
            for (int i = numRows - 2; i >= 1 && index < n; i--) {
                say[i].push_back(s[index++]);
            }
        }

        string result = "";
        for (int i = 0; i < numRows; i++) {
            result += say[i];          // join rows top to bottom
        }
        return result;
    }
};