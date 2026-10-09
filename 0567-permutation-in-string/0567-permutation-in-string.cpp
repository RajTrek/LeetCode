class Solution {
public:

    bool isFreqCheck(int s1[],int s2[]){
        for(int i=0;i<26;i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int windsize=s1.length();
       
        for(int i=0;i<s2.length();i++){
            int windindx=0,idx=i;
            int freqs[26]={0};
            while(windindx<windsize && idx<s2.length()){
                freqs[s2[idx]-'a']++;
                windindx++;
                idx++;

            }
             if(isFreqCheck(freq,freqs)){
            return true;
        }
        }
        return false;
      
    }
};