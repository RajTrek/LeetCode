class Solution {
public:
        bool ispalindrome(const string &s,int left,int right){
            while(left<right){
                if(s[left]!=s[right]){
                    return false;
                }
                right--;
                left++;
            }
            return true;
        }
    string longestPalindrome(string s) {
        int bs=0;
        int bl=1;
   
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                int len =j-i+1;
                if(len>bl && ispalindrome(s,i,j)){
                    bs=i;
                    bl=len;
                }
            }
        }
        return s.substr(bs,bl); 
    }
};