class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0; i<s.size(); i=i+2*k)
        {
            int j= i+k;
            if(j>=s.size()) 
                j = s.size();
            reverse(s.begin()+i,s.begin()+j);
        }
        return s;
    }
};
