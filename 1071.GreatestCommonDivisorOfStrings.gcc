

bool isDivisor(int length,string str1,string str2){ //// 3 ABCABC ABC

    int size1=str1.size(); // 6
    int size2=str2.size(); // 3
    if(size1%length==1 || size2%length==1)
        return false;
    else{
        int fac1=size1/length; // 2
        int fac2=size2/length; // 1
        string substr=str1.substr(0,length); // ABC
        string result;
        string newstr1="";
        string newstr2="";
        for(int i=0;i<fac1;i++)
        newstr1+=substr;
        for(int i=0;i<fac2;i++)
        newstr2+=substr;

        if(newstr1==str1 && newstr2==str2)
        return true;
    }

    return false;    
}   


class Solution {

 
public:
    string gcdOfStrings(string str1, string str2) {
        
    int mn=min(str1.size(),str2.size());//3

    for(int i=mn;i>0;i--){ // 3
        if(isDivisor(i,str1,str2)) // 3 ABCABC ABC
            return str1.substr(0,i);// answer
    }

    return "";        
     
    }
};
/*
Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"

ABAB
AB
*/
