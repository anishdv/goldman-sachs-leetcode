// this is solution to https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // two pointer approach 
        // tc- o(nlogn) and sc- o(1)
        
        sort(nums.begin(), nums.end());
        int ans = 0, i = 0, j = 1;
        for(i, j; i<nums.size() && j<nums.size(); ) {
            if(i==j || nums[j]-nums[i]<k) j++;
            else {
                if(nums[j]-nums[i]==k) {
                    ans++;
                    j++;
                    while(j<nums.size() && nums[j]==nums[j-1]) j++; // remove redundant
                }
                i++;
                while(i<j && nums[i]==nums[i-1]) i++; // remove redundant
            }
        }
        return ans;
    }
};