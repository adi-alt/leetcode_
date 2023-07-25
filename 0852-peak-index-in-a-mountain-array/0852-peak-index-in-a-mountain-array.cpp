class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0 , e = arr.size()-1;
        while(e-s>1){
            int mid = s + (e-s)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                return mid;
            }else if(arr[mid]>arr[mid-1]){
                s = mid;
            }else if(arr[mid]<arr[mid-1]){
                e = mid-1;
            }
        }
        if(arr[e]>arr[s])return e;
        else return s;
    }
};