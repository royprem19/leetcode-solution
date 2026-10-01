class Solution {
public:
    bool isPalindrome(int x) {
        int orignal = x;
        long long rev = 0;
        while( x >0){
            int lastdigit = x%10;
            rev = (rev*10)+ lastdigit;
            x = x/10;
        }
        if(orignal==rev){
            return true;
        }else{
            return false;
        }
    }
};