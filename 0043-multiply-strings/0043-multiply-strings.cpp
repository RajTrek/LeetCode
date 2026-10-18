class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 =="0"){
            return "0";
        }
        int n=num1.size();
        int m=num2.size();

        vector<int>pos(n+m,0);
         for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int digit1=num1[i]-'0';
                int digit2=num2[j]-'0';
                int prod=digit1*digit2+pos[i+j+1];
                pos[i+j+1]=prod%10;
                pos[i+j]+=prod/10;
            }
         }

         string result="";
         for(int p: pos){
            if(result.empty() && p==0 ) continue;
            result+=(char)('0'+p);
         }
         return result;

    }
};