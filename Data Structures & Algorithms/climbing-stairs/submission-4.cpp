class Solution {
public:
    int climbStairs(int n) {
        vector<int> method(n+1, -1);
       
        for (int i=1;i<=n;i++)
        {
            if(i==1) method[1]=1;
            else if(i==2) method[2]=2;
            else{
            int a=method[i-1];
            int b=method[i-2];
            method[i]=a+b;
            }
        }
        return method[n];
    }
};
