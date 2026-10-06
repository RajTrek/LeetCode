class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int maxcurr=0;
        while(lp<rp){
            int wt=rp-lp;
            int vl=min(height[lp],height[rp]);
            int curr=wt*vl;
             maxcurr=max(maxcurr,curr);
             height[lp]<height[rp] ? lp++ : rp--;
        }
        return maxcurr;
    }
};