//NUMBER OF 1 BITS COUNT PROBLEM
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
            //while checking
            if(n&1){
                count++;

            }
            n=n>>1;
        }
        return count;
        
    }
};