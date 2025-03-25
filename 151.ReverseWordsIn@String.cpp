string removeExtraSpaces(const string& str) {
    stringstream ss(str);
    string word;
    string result;

    while (ss >> word) {
        if (!result.empty()) {
            result += " ";
        }
        result += word;
    }

    return result;
}



class Solution {
public:                             //  012345678901234
    string reverseWords(string s) { // "the*sky*is*blue"

       s=removeExtraSpaces(s);
       int size=s.size();//14
       string out; // ""
       vector<string>v; // [the sky is ]
       for(int i=0;i<size;i++){ // 11 -> 14
            string substr; // ""
            int pos=s.find(" ");// -1
            if (pos == -1){
                substr=s.substr(i); //11
                i=size+1;
                v.push_back(substr);
            }
            else{
                substr=s.substr(i,pos-i); // is
                s[pos]='*';
                i=pos;//10
                v.push_back(substr);
            }
            
       }
        
       

       for(int i=v.size()-1;i>=0;i--){
        out+=v[i];
        if(i>0)
        out+=" ";
       }
            


    return out;
    }
};
