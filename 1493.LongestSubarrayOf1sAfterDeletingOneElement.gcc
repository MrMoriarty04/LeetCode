class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int size=nums.size();
        int zeros=0,maxsum=0;
        int left=0;

        if(size==1)
        return 0;

        for(int right=0;right<size;right++){
            
            
            if(nums[right]==0)
            zeros++;

            while(zeros>1){
                if(nums[left]==0)
                zeros--;
                left++;
            }

        maxsum=max(maxsum,right-left+1);    

        }
        

        

    return maxsum-1;
    }
};
