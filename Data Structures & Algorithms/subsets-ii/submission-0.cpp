class Solution {
public:

    vector<vector<int>> res;
    vector<int> s;
    vector<int> vis;

    void backtrack(int idx,vector<int>& nums, vector<int>& s){
        int n = nums.size();
        res.push_back(s);

        for(int i = idx;i < n;i++){

            

            if(i > idx and nums[i] == nums[i-1]){
                continue;
            }

            s.push_back(nums[i]);
            
            backtrack(i+1,nums,s);

            s.pop_back();
            
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vis = vector<int>(nums.size(),0);
        sort(nums.begin(),nums.end());

        backtrack(0,nums,s);
        return res;
        
    }
};
