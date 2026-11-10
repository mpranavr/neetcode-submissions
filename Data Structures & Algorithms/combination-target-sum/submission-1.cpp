class Solution {
public:
    vector<vector<int>> res;
    vector<int> s;
    void backtrack(int idx,vector<int>& nums,int n, int target,int sum,vector<int>& s){
        if(idx == n){
            return;
        }

        if(sum == target){
            res.push_back(s);
            return;
        }

        if(sum > target){
            return;
        }

        s.push_back(nums[idx]);
        backtrack(idx,nums,n,target,sum+nums[idx],s);
        s.pop_back();
        backtrack(idx+1,nums,n,target,sum,s);


    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size();

        backtrack(0,nums,n,target,0,s);

        return res;
        
    }
};
