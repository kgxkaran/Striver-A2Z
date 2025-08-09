1. Largest Element in an array :-

  class Solution {
public:
    int largestElement(vector<int>& nums) {
        if(nums.size() == 0) return -1;
        if(nums.size() == 1) return nums[0];
        
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > ans){
                ans = nums[i];
            }
        }
        return ans;

    }
};

2. Smallest Element in an array :- 


   class Solution {
public:
    int largestElement(vector<int>& nums) {
        if(nums.emoty() return -1;
        if(nums.size() == 1) return nums[0];
        
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < ans){
                ans = nums[i];
            }
        }
        return ans;

    }
};
  
