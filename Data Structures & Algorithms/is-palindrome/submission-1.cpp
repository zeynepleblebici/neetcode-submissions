class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.length();
        int l=0, r=len-1;
        while(l<r)
        {
            while(l<r && !((int(s[l])<=57 && int(s[l])>=48 ) ||(int(s[l])<=90 
            && int(s[l])>=65 ) || (int(s[l])<=122 && int(s[l])>=97)))
            {
                l++;
            }
            if (l<r)
            {
                while(l<r && !((int(s[r])<=57 && int(s[r])>=48 ) ||(int(s[r])<=90 
                && int(s[r])>=65 ) || (int(s[r])<=122 && int(s[r])>=97)))
                {
                    r--;
                }
                if(l<r)
                {
                    char a,b;
                    if((int(s[l])<=90 && int(s[l])>=65 ))
                    {
                        a= s[l]+32;
                    }
                    else a=s[l];
                    if((int(s[r])<=90 && int(s[r])>=65 ))
                    {
                        b= s[r] +32;
                    }
                    else b=s[r];
                    if(a!=b) return false;
                    l++;
                    r--;
                }
            }
       }
       return true;
    }
};
