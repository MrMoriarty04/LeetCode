class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //[1,0,0,0,1,0,0]
        //2 output false expected true
        int i=0; // 


        if((flowerbed.size()==1 && flowerbed[i]==0) || n==0)
        return true;

        if(flowerbed.size()==1 && flowerbed[i]==1)
        return false;

        while(n>0 && i<flowerbed.size()){ // 2     2<7
        if(i==flowerbed.size()-1){
                if(flowerbed[i]==0 && flowerbed[i-1]==0){
                    n--;
                    i+=2;
                }
                else{i++;}
            }
            else if(i>0){
                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                n--;
                i+=2;
                 }
                  else{
                   i++;
                      }
            }
            else if(i==0){
                if(flowerbed[i]==0 && flowerbed[i+1]==0){
                    n--;
                    i+=2;
                }
                else{
                    i++;
                }
            }
            
            
            
        }

        if(n==0)
        return true;
        else 
        return false;

    }
};
