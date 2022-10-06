/*
maximum circular subarray sum:

1 2 -4 5 6
maxSubarraySum = 11
ArraySum = 10

invert all the elements of the array:
-1 -2 4 -5 -6
InvertedmaxSubarraySum = 4

circularSubarraySum(ArraySum + InvertedmaxSubarraySum);

maxCircularSubarraySum = max(circularSubarraySum, maxSubarraySum)

i.e 14.
 */

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)


int maxSubarraySum(int array[], int n){
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
// 1 2 -4 5 6
// normal = 11;
int maxCirSubArraySum(int array[], int n){
    int normal = maxSubarraySum(array, n);
    if(normal < 0){
        return normal;
    }
    int arraySum = 0;
    for(int i = 0; i < n; i++){
        arraySum += array[i];
        array[i] = -array[i];
    }
    // -1 -2 4 -5 -6
    int invertedmaxSubarraySum = maxSubarraySum(array, n);
    int circularSubarraySum = arraySum + invertedmaxSubarraySum;
    return max(circularSubarraySum, normal);
}
void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << maxCirSubArraySum(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}