class Solution {
public:
    bool ispal(const string& s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int d=0, i=0, j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                d++;
                if(d>1)
                    return false;
                return ispal(s,i,j-1) || ispal(s,i+1,j);

            }else{
                ++i; --j;
            }
        }
        return true;
    }
};
