

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};                      // no digits -> no combinations
        }

        vector<string> table = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result = {""};       // start with one empty string

        for (char d : digits) {
            vector<string> temp;            // new layer

            for (string str : result) {             // each string so far
                for (char ch : table[d - '0']) {    // each letter of this digit
                    temp.push_back(str + ch);       // extend and save
                }
            }
            result = temp;                  // replace old layer with new one
        }
        return result;
    }
};