class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> stair(n, 100);
        for (int i=0; i<n; i++)
        {
            if(i==0)
            {
                stair[i]= cost[0];
            }
            else if(i==1)
            {
                stair[i]= cost[1];
            }
            else
            {
                stair[i]=min(stair[i-1], stair[i-2]) + cost[i];
            }
        }
        int result = (n>=2) ? min(stair[n-1], stair[n-2]) : stair[n-1];
        return result;
    }
};
