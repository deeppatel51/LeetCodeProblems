class Solution {
public:
    bool isMatch(string s, string p) {
       int n = s.length();
       int m = p.length();
        
      vector<vector<bool>> dp(n+1, vector<bool>(m+1,false));
        for(int i=1; i<=p.size(); i++){
            if(p[i-1] == '*') dp[0][i] = true;
            else break;
        }
        dp[0][0] = true;
        for(int i = 1; i<n+1; i++){
            for(int j = 1; j<m+1; j++){
                if(s[i-1] == p[j-1] || p[j-1] == '?'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[j-1] == '*'){
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                }
            }
        }
        
      return dp[n][m];  
    }
};
