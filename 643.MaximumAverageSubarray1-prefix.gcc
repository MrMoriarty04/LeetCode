#include <cmath>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int size=nums.size();
        vector<int>prefix(size);

        prefix[0]=nums[0];
        for(int i=1;i<size;i++)
            prefix[i]=prefix[i-1]+nums[i];
        int mx=-1e7+1;
        for(int i=0;i<=size-k;i++){
            if(i==0)
            mx=max(mx,prefix[i+k-1]);
            else
            mx=max(mx,prefix[i+k-1]-prefix[i-1]);
        }
        cout<<size<<endl;
        cout<<mx<<endl;
        double res=(double)mx/(double)k;
        return res;
 
    } 
};
