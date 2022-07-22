class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int write_indx = 1;
        if(nums.empty()) {
            return 0;
        }
        for(int i = 0; i < nums.size();i++) {
            if(nums[write_indx-1] != nums[i]) {
                nums[write_indx++] = nums[i];
            }
        }
        return write_indx;
     
    }
};
