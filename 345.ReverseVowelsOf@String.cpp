class Solution {
public:
    string reverseVowels(string s) { // Aa
        string out="",temp="";
        int size=s.size();

        if(size==1 || size==0)
        return s;

        for(int i=0;i<size;i++){
            if( s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'||  s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                out+='*'; // ..
                temp+=s[i]; // Aa
            }
            else
            out+=s[i];
        }
        int tempsize=temp.size(); // 2
        for(int i=0,j=tempsize-1;i<size;i++) // 0 1
        {
            if(out[i]=='*'){ //
                out[i]=temp[j--]; // 
            }
            
        }
        
        return out;

    }
};
