class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0 ;
        int n = nums.size();
        int len = INT_MAX;
        int sum = 0;
        for(int i = 0 ; i < n; ){
            sum += nums[i];
            if(sum<target){
                i++;
            }else{
                while(sum>=target){
                    len = min(len,i-j+1);
                    sum -= nums[j];
                    j++;
                }
                i++;
            }
        }
        return len==INT_MAX?0:len;
    }
};