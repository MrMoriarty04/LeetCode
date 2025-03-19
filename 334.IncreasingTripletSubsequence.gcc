class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size=nums.size();//[2,1,5,0,4,6]
        int num1=2147483647,num2=2147483647;
        bool flag=false;
        for(int i=0;i<size;i++){
            if(nums[i]>num2){
                flag=true;
                break;
            }
                

            if(nums[i]<num1){
                num1=nums[i];
                continue;
            }
            if(nums[i]>num1){
                num2=nums[i];
            }

        }
        cout<<num1<<" "<<num2;


        return flag;
    }
};
