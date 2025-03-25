class Solution {
public:
    int maxOperations(vector<int>& nums, int k) { 
        int size=nums.size(); 
        int left=0,right=size-1; 
        int operation=0; 
        sort(nums.begin(),nums.end());
        while(left<right){ 
            if((nums[left]+nums[right])==k){
                nums[left]=-1;
                nums[right]=-1;
                operation++;
                left++;
                right--;
            }
            else{
                if((nums[left]+nums[right])<k) 
                left++; 
                else
                right--;
            }
        }


        return operation;
    }
};
