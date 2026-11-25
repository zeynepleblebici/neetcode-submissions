class Solution {
public:
    bool isAnagram(string s, string t) {
      int a=s.length();
      int b=t.length();
      if(a!=b) return false;
      vector<int> abc(26);
      for(int i=0; i<a; i++)
      {
        int elem= int(s[i])-97;
        abc[elem]++;
      }
      for(int i=0; i<b; i++)
      {
        int elem= int(t[i])-97;
        abc[elem]--;
        if(abc[elem]==-1) return false;
      }
      return true;

    }
};
