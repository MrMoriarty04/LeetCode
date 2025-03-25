class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int size= nums.size();
        if (size<2)
        return ;    
        int left=0,right=1;

        while(left<right){ 
            if(nums[left]==0){
                swap(nums[left],nums[right]);
                right++;
            }
            else{
            right++;
            }
            if(nums[left]!=0)
            left++;
            if(right==size)
            break;
        }

    }
};
