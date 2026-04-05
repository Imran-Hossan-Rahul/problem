#include <iostream>
#include <climits>
using namespace std;


int maxSubArrSum (int arr[], int n){
    int maxSum = INT_MIN, currSum;

    for(int i=0; i<n; i++){
        currSum = 0;
        for(int j=i; j<n; j++){
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}


int kadanes(int arr[], int n){
    int maxSum = INT_MIN, currSum = 0;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) currSum = 0;
    }

    return maxSum;
}

int main(){
    int arr[5] = {1, -3, 2, 1, -1};
    int n = 5;

    // cout << maxSubArrSum(arr, n) << endl;
    cout << kadanes(arr, n) << endl;

    return 0;
}