#include <cmath>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
    
    int size=nums.size();
    if(size==1)
    return (double)nums[0];
    int sum=0;
    for(int i=0;i<k;i++)
        sum+=nums[i];
    int mx=sum;

    for(int i=0;i<size-k+1;i++){
        sum+=nums[i+k];
        sum-=nums[i];

        mx=max(mx,sum);
    }

    double res=(double)mx/k;
    return res;

    } 
};
