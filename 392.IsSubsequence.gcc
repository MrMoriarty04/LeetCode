class Solution {
public:
    bool isSubsequence(string s, string t) {
        int check=s.size(),size=t.size();
        bool flag=false;

        if(check<1)
        return true;
        
        for(int i=0,j=0;i<size;i++){
            if(s[j]==t[i]){
                j++;
            }

            if(j==check)
            flag=true;

        }

        return flag;

    }
};
