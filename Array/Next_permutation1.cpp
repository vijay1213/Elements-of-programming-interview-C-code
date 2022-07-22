class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n-2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
        // the above loop is for nums[i] < nums[i+1] for these condition
    	if (k < 0) {
    	     reverse(nums.begin(), nums.end());
            // return;
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
                // these loop is for finding the elemrnt grreater than the elemt find in first loop
            } 
    	    swap(nums[k], nums[l]);
            // swpping the smallest elemenmt with greater element
    	    reverse(nums.begin() + k+1, nums.end());
            // in these example 1 4 5 3 2 we swap the elemt 5 3 2 
        }
    }
}; 
