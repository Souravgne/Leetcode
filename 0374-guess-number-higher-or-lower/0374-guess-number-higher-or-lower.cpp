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
      int s =0 ;
                                int mid = s+(n-s)/2;

            while(s<=n){
                   
                    int a =  guess( mid);
                    if(a== 0)return mid;
                    if(a == 1)s= mid+1;
                    if(a== -1)n = mid ;
                    mid = s+(n-s)/2;

            }
            
            return mid;
    }
};