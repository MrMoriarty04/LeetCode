
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        int mx=0,size=candies.size();
        vector<bool> result(size);
        for(int i=0;i<size;i++){
            mx=max(mx,candies[i]);
        }

        for(int i=0;i<size;i++){
            if(candies[i]+extraCandies>=mx)
                result[i]=true;
        }

        return result;
    }
};
