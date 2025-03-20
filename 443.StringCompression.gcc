#include <vector>

class Solution {
public:
    int compress(vector<char>& chars) { // ["a","a","b","b","c","c","c"]
       int size=chars.size(); // 7
       vector<char> temp; // a 2 b 2 
       string out ="";//


       int sum=1,left=0,right=1;// 2 4 6
       while(right<size && size>1){ // 7 < 7
        if(chars[left]==chars[right]){ // c==c
            right++; // 7
            sum++; // 3
        }
        else{
            temp.push_back(chars[left]); // 

            if(sum>9){
                char a,b;
                if(sum>99){
                a=floor(sum/100);
                b=sum-a*100;
                }

                else{
                    a=floor(sum/10);
                    b=sum-a*10;
                }
                

                temp.push_back(a+48);
                temp.push_back(b+48);
                left=right;
                right++;
                 sum=1;
            }
            else{
            char tt=48+sum;
            if(sum>1)
            temp.push_back(tt);
            left=right; // 4
            right++; // 5
            sum=1; // 1
            }

        }

        if(right==size){
            temp.push_back(chars[left]); 
            if(sum>9){
                char a,b;
                if(sum>999){
                char c,d;
                a=floor(sum/1000);//1
                b=sum-a*1000;// 100-100
                c=48+sum-1000*a;
                d=48+sum-1000*a;
                temp.push_back(a+48);
                temp.push_back(b+48); 
                temp.push_back(c); 
                temp.push_back(d);                      
                }
                else if(sum>99){
                char c;
                a=floor(sum/100);//1
                b=sum-a*100;// 100-100
                c=48+sum-100*a;
                temp.push_back(a+48);
                temp.push_back(b+48); 
                temp.push_back(c);                
                }

                else{
                    a=floor(sum/10);
                    b=sum-a*10;
                temp.push_back(a+48);
                temp.push_back(b+48);                    
                }

            }
            else{
            char tt=48+sum;
            if(sum>1)
            temp.push_back(tt);
            }            

        }
       }

       if(size>1) 
       for(int i=0;i<size;i++)
             chars.pop_back();

      
        if(size==1)
        out+=chars[0];
        else
       for(int i=0;i<temp.size();i++){
             out+=temp[i];
             chars.push_back(temp[i]);
       }
            

       int outsize=out.size();
    return outsize ;
    }
};
