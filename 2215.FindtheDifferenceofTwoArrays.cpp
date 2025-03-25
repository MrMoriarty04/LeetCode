class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size(),size2=nums2.size();
        set<int> set1;
        set<int> set2;
        vector<int> res1;
        vector<int> res2;

        for(int i=0;i<size1;i++){
            set1.insert(nums1[i]);
        }

        for(int i=0;i<size2;i++){
            set2.insert(nums2[i]);
        }

        for(auto it =set1.begin(); it != set1.end();it++){
            if(!set2.contains(*set1.find(*it)))
                res1.push_back(*set1.find(*it));
        }

        for(auto it =set2.begin(); it != set2.end();it++){
            if(!set1.contains(*set2.find(*it)))
                res2.push_back(*set2.find(*it));
        }        


        return {res1,res2}; 
    }
};
