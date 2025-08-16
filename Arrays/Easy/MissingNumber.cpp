Approach 1 :-   using hashing
  Time complexity :- O(N)
  Space complexity :- O(N)

  class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for (int num : nums) {
            mpp[num] = 1;
        }
        for (int i = 0; i <= n; i++) {
            if (mpp[i] == 0) {
                return i;
            }
        }
        return -1; 
    }
};

Approach 2 :- using Sum formula

  Time complexity :- O(N)
  Space complexity :- O(1)


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        int sum = 0;
        for(int num : nums){
            sum = sum+num;
        }
        return total-sum;
    }
};
