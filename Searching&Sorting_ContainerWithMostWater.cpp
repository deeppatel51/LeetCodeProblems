class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int start=0,h,d;
        int end=height.size()-1;
        int maxi=0;
        while(end>start)
        {
            h=min(height[start],height[end]);
            d=(end-start)*h;
            maxi=max(maxi,d);
            if(height[start]<height[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
         return maxi;
    }
}; 
