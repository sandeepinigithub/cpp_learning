#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    map<int,int> nums_map;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        nums_map[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int value = target - nums[i];
        if (nums_map.find(value) != nums_map.end() && nums_map[value] != i)
        {
            result.push_back(i);
            result.push_back(nums_map[value]);
            return result;
        }
    }
}

int main()
{
    vector<int> numberArray = {1,2,3,4,5,6};
    vector<int> result;
    result = twoSum(numberArray,5);
    cout<<"The two index are :-";
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
}
