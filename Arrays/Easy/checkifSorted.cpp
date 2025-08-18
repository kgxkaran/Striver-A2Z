Q1. Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.

  class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i] > nums[i+1]) return false;
            }
            return true;
		}
};

Q2. Check if Array Is Sorted and Rotated:-

   if(nums[i] > nums[(i + 1) % n]) pair++;
