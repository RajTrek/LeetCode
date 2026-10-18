class Solution {
public:
    bool isPalindrome(int x) {
        int rem =0;
        int long sum =0;
     int original =x;
        while(x>0){
            
            rem =x%10;
            sum = sum * 10 + rem;
            x=x/10;

        }
        if(original==sum){
            return true;
        }
        else{
            return false;
        }

    }
};