class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int size=nums.size();
        int zeros=0,maxsum=0;
        int left=0;

        for(int right=0;right<size;right++){
            
            
            if(nums[right]==0)
            zeros++;

            while(zeros>k){
                if(nums[left]==0)
                zeros--;
                left++;
            }

        maxsum=max(maxsum,right-left+1);    

        }
        

        

    return maxsum;
    }
};
