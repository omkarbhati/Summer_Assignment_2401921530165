class Solution {
public:
    int singleNumber(vector<int>& nums) {

        if(nums.size() == 1) 
            return nums[0];

        sort(nums.begin(),nums.end());
        for(int i =0; i<nums.size();i=i+3){
          if(i+1 < nums.size() && nums[i]!=nums[i+1]){
            return nums[i];
          }

          if(i+1 == nums.size() && nums[i-1] != nums[i])
            return nums[i];
        }
        return 0;
    }
};