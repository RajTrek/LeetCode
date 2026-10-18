class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.length()&& s[i]==' '){
        i++;
        }
      
        int sign = 1;

        if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.length() && s[i] == '+') {
            i++;
        }
        long long ans=0;
        while(i<s.length()){
            if(!isdigit(s[i])) break;
            int digit=s[i]-'0';
            ans=ans*10+digit;
            if(sign == -1 && -1*ans<INT_MIN) return INT_MIN;
             if(sign == 1 && 1*ans>INT_MAX) return INT_MAX;
             i++;
        }
        return sign*ans;
    }
};