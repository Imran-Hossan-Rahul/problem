#include <iostream>
#include <climits>
#include <vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;

        for(int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);

            if(currSum < 0) currSum = 0;

        }

        return maxSum;
    }

int main(){
    vector<int> nums = {1, -3, 2, 1, -1};
    int n = 5;

    // cout << maxSubArrSum(arr, n) << endl;
    cout << maxSubArray(nums) << endl;

    return 0;
}