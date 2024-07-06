//1281.SUBTRACT THE PRODUCT AND SUM OF DIGIT OF AN INTEGER
class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n!=0){
            int dig=n%10;
            p=p * dig;
            s=s+dig;
            n=n/10;


        }
        int ans=p-s;
        return ans;

        
    }
};