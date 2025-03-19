class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> prefix(size);
        vector<int> prefixzero(size);
        vector<int> answer(size);
        int zerosum=0;

        prefix[0]=nums[0];
        for(int i=1;i<size;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }

        prefixzero[0]=nums[0];
        if(nums[0]==0)
        zerosum++;
        for(int i=1;i<size;i++){
            if(nums[0]==0)
            prefixzero[1]=prefixzero[0]+nums[1];
            if(nums[i]==0){
                prefixzero[i]=prefixzero[i-1]+nums[i];
                zerosum++;
            }
            
            else
            prefixzero[i]=prefixzero[i-1]*nums[i];
        }

        for(int i=0;i<size;i++){
            if(nums[i]==0 && zerosum==1){
            answer[i]=prefixzero[size-1];
            }
            else if(zerosum==0)
            answer[i]=prefix[size-1]/nums[i];
            else
            answer[i]=0;
            
        }


        

    return answer;
    }
};
