class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size(); 
        int temp = size-1,left=0,right=size-1;
        int mx =-1;
        while(left<right){ 
         mx=max((min(height[left],height[right])*temp),mx); 
         if(height[left]<height[right]){ 
            left++; 
            temp--;
         }   
         else{
            right--;
            temp--;
         }
        }

        return mx; 


    }
};
