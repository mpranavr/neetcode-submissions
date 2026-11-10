class Solution {
public:

    vector<vector<int>> res;
    vector<int> s;

    void backtrack(int idx,vector<int>& nums,int n){

        if(idx == n){
            res.push_back(s);
            return;
        }

        s.push_back(nums[idx]);
        backtrack(idx+1,nums,n);
        s.pop_back();
        backtrack(idx+1,nums,n);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        backtrack(0,nums,n);
        return res;
        
    }
};
