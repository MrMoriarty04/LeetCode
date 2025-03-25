class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int prefix[size+2];
        prefix[0]=0;prefix[size+1]=0;
        prefix[1]=nums[0];
        for(int i=2;i<=size;i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }


        for(int i=1;i<=size;i++)
        {
            if(prefix[i-1]==prefix[size]-prefix[i])
            return i-1;
        }
        

        return -1;
        // 1  8 11 17 22 28
        // 1  7  3  6  5  6

    }
};
