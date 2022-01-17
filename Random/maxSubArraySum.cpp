// Kadane's Algorithm 
// Logic Used - Max Subarray Sum

#include<bits/stdc++.h>
using namespace std;
int maxSubArrSum(vector<int> &nums){
    int maxSum=INT_MIN;
    int curSum = 0;
    for(int i=0;i<nums.size();i++){
        curSum += nums[i];
        maxSum = max(maxSum,curSum);
        if(curSum <0){
            curSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> arr{1,2,-356,58};
    cout<<"Max sub Array: "<<maxSubArrSum(arr);
    return 0;
}