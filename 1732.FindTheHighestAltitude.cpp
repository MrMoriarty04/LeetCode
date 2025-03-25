class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int size=gain.size();
        int arr[size];
        arr[0]=gain[0];
        int mx=arr[0];
        for(int i=1;i<size;i++){
            arr[i]=arr[i-1]+gain[i];
            mx=max(mx,arr[i]);
        }
    if(mx<0)
    return 0;    
    return mx;    
    }
};
