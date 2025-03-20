

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long long left=1 ,right=n; // 0 1
        long long mid;
        while(left<=right){ // 1 2
             mid=floor((left+right)/2); // 0
             int gg=guess(mid);
            if(gg==0){
                return mid;
            }
            else if(gg==1)
            left=mid+1;
            else if(gg==-1)
            right=mid-1;
        }
    return mid;
    }
};
