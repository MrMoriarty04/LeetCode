class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        int size=arr.size();
        map<int,int> occur;
        set<int> check;
        for(int i=0;i<size;i++){
            if(occur.find(arr[i])!=occur.end()){
                occur[arr[i]]+=1;
            }
            else{
                occur.insert({arr[i],1});
            }
        }

        int mapsize=occur.size();

        for(auto map:occur){
            cout<<map.first<<" "<<map.second<<endl;
        }

        for (const auto& pair : occur) {
        check.insert(pair.second);
        }

        if(mapsize==check.size())
            return true;
        else
            return false;    

    return true;
    }
};
