class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int siz=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<siz;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
            if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];   
            }
            return pos;
            }

            if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
                
            }
            reverse(neg.begin(),neg.end());
             return neg;
            }

            int m=pos.size();
            int n=neg.size();
            int i=0;
            int j=0;
         
            vector<int>result;
           
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }
             for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
                 
            }
            reverse(neg.begin(),neg.end());
            while(i<m && j<n){
                if(neg[j]<=pos[i]){
                    result.push_back(neg[j]);
                    j++;
                
                }
                else{
                     result.push_back(pos[i]);
                    i++;
                 
                }
            }

            while(i<m){
                    result.push_back(pos[i]);
                    i++;
               
            }
              while(j<n){
                  result.push_back(neg[j]);
                    j++;
           
            }
            return result;
    }
};