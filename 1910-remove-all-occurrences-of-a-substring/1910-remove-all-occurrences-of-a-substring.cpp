class Solution {
public:
    string removeOccurrences(string s, string part) {
        int start;
      while((start=s.find(part))!=string::npos){
        s.erase(start,part.length());
      }
      return s;
    }
};