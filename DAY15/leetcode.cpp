// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

int fistOcc(vector<int>& array, int target) {
        int n = array.size();
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(array[mid] < target){
                start = mid+1;
            }
            else if(array[mid] > target){
                end = mid-1;
            }
            else{
                if(mid==0 || array[mid] != array[mid-1]){
                    return mid;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
    
    int lastOcc(vector<int>& array, int target){
        int n = array.size();
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(array[mid] < target){
                start = mid+1;
            }
            else if(array[mid] > target){
                end = mid-1;
            }
            else{
                if(mid == n-1 || array[mid] != array[mid+1]){
                    return mid;
                }
                else{
                    start = mid+1;
                }
            }
        }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& array, int target) {
        vector<int>v;
        v.push_back(fistOcc(array, target));
        v.push_back(lastOcc(array, target));
        return v;
    }