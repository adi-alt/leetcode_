class Solution {
public:
    double helper(double a,int b){
        if(!b)return 1;
        double x = helper(a,b/2);
        if(b%2){
          return (((a*x))*x);
        }else{
          return (x*x);
        } 
    }
    double myPow(double a, int b) {
        if(b<0){
          return helper(1/a,b);
        }else{
          return helper(a,b);
        }
    }
};