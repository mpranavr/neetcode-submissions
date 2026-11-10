class Solution {
public:
    vector<vector<int>> res;
    vector<int> s;
    void backtrack(int idx,vector<int>& nums,int n, int target,int sum,vector<int>& s){
        

        if(sum == target){
            res.push_back(s);
            return;
        }

        if(sum > target || idx == n){
            return;
        }


        for(int i = idx;i<n;i++){

            if(i> idx && nums[i] == nums[i-1]){
                continue;
            }

            if(sum + nums[i] > target) {
                break;
            }

        s.push_back(nums[i]);
        backtrack(i+1,nums,n,target,sum+nums[i],s);
        s.pop_back();
        }


    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        backtrack(0,nums,n,target,0,s);

        return res;
        
    }
};
