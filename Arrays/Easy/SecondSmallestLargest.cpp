1. If there are no duplicates available so just sort an array and return arr[n-2]
   but the follow up question is that wec cant sort the array... so what now ??

2. now what we can do is first find the largest elementif exist..handle the case of size < 2 and then again run the classic max algo and check if arr[i]!=large;
   handle the case of duplicates

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        if(nums.size() < 2) return -1;
        int large = nums[0];
        int second_large = INT_MIN;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > large){
                large = nums[i];
            }
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > second_large && nums[i] != large){
                second_large = nums[i];
            }
        }
        if(second_large == INT_MIN) return -1;
        return second_large;
    }
};
