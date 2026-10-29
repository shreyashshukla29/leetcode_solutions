class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x%10==0&& x!=0)
        {
            return false;
        }
        int d;
        int o=x;
        int rev=0;
        while(x>rev)
        {
            d=x%10;
            rev=(rev*10)+d;
            x/=10;
        }
        return rev==x||x==rev/10;
    }
};