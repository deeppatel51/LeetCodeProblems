class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        map<vector<int>,int> m;
        m[p1]++;
        m[p2]++;
        m[p3]++;
        m[p4]++;
        if(m.size()<4)
            return 0;
        if(fun(p1,p2,p3)==0)
            return 0;
        if(fun(p1,p2,p4)==0)
            return 0;
        if(fun(p1,p4,p3)==0)
            return 0;
        if(fun(p4,p2,p3)==0)
            return 0;
        return 1;
    }
    int fun(vector<int>& p1, vector<int>& p2, vector<int>& p3){
        int a=0,b=0,c=0;
        a=dist(p1,p2);
        b=dist(p1,p3);
        c=dist(p2,p3);
        
        if((a==b && a+b==c)||(a==c && a+c==b) ||(b==c && b+c==a))
            return 1;
        else
            return 0;
    }
    int dist(vector<int>& a,vector<int>& b)
    {
        int p=0;
        p+=(a[0]-b[0])*(a[0]-b[0]);
        p+=(a[1]-b[1])*(a[1]-b[1]);
        return p;
    }
};
