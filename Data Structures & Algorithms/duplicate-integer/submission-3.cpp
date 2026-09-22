class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int prev = pow(10,9) + 1;
        for(int i=0;i<n;i++){
            if(prev==nums[i]){
                return true;
            }
            prev = nums[i];
        }
        return false;
    }
};