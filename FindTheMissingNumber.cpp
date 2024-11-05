// Find the Missing Number: Given an array containing n distinct numbers taken from 0 to n,
//  find the one number that is missing from the array.
#include <iostream>
#include<vector>
using namespace std;
class Array {
    public:
    //function to find the missing number
    int findMissingNumber (const vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n+1) /2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;

        }
        return expectedSum - actualSum;

    }
};
int main () {
    Array array;
    vector <int> nums = {0,1,2,3,4,5};
    int missingNumber = array.findMissingNumber(nums);
    cout << "The Missing number is " <<missingNumber<<endl;
}


