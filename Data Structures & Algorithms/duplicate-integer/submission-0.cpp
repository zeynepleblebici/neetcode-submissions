class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return false;
        set<int> s;
        s.insert(nums[0]);
        int size=1;
        for (int i=1; i<n; i++)
        {
            s.insert(nums[i]);
            if(s.size()==size) return true;
            size++;
        }
        return false;

    }
};