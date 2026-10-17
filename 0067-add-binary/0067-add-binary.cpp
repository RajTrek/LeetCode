class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size();
        int m=b.size();
        string s;
       if (n > m) {
            b = string(n - m, '0') + b;
            }
        else{
            a= string(m-n, '0') + a;
        }
        int carry=0;
        string ans="";
        for(int i=b.size()-1;i>=0;i--){
            int sum=(a[i]-'0')+(b[i]-'0')+carry;
            ans+=(sum%2)+'0';
            carry=sum/2;
        }
        if(carry!=0){
            ans+='1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};