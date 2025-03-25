class Solution {
public:
    int maxVowels(string s, int k) {
        int size=s.size();
        int sum=0;
        for(int i=0;i<k;i++)
            if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='o'||s[i]=='e')
                sum++;
        int mx=sum;
        for(int i=0;i<=size-k;i++){
            if(s[i+k]=='a'||s[i+k]=='i'||s[i+k]=='u'||s[i+k]=='o'||s[i+k]=='e')
                sum++;
            if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='o'||s[i]=='e')
                sum--;
            mx=max(sum,mx);        
        }

        return mx;        
    }
};
