class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer=0;
        int cm=1;
        int k=1;
        while(cm<nums.size()){
            if(nums[cm]==nums[cm-1]){
            cm++;
            continue;
        }else
        {
            officer++;
            nums[officer]=nums[cm];
            cm++;
            k++;
        }
       
    }
     return k;
    }
};