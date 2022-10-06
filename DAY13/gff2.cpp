https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1#
int kadaneAlgorithm(int array[], int n){
        int maxxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += array[i];
            if(sum > maxxi){
                maxxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxxi;
    }
int circularSubarraySum(int array[], int n){
        int normalSubarraySum = kadaneAlgorithm(array, n);
        if(normalSubarraySum < 0){
            return normalSubarraySum;
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += array[i];
            array[i] = -array[i];
        }
        int cirsubsum = sum + kadaneAlgorithm(array, n);
        return max(normalSubarraySum, cirsubsum);
        // your code here
        
    }