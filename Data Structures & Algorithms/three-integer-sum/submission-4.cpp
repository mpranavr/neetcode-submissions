class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int curr_sum = 0;
        
        for(int k = 0;k<n;k++){

            if (k > 0 && nums[k] == nums[k - 1])
                continue;

            int i = k+1;
            int j = n-1;
            while(i<j){
                

                curr_sum = nums[k] + nums[i] + nums[j];
                if(curr_sum>0){
                    j--;
                    continue;
                }
                else if(curr_sum<0){
                    i++;
                    continue;
                }
                else{
                    ans.push_back({nums[k], nums[i], nums[j]});
i++;
                j--;
                }
                
                    // Skip duplicate left values
                    while (i < j && nums[i] == nums[i - 1])
                        i++;

                    // Skip duplicate right values
                    while (i < j && nums[j] == nums[j + 1])
                        j--;                
            }
        }
        return ans;
        
    }
};
