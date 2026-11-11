class Solution {
public:
    vector<vector<int>> res;
    vector<int> s;
    vector<int> vis;

    void backtrack(vector<int>& nums,vector<int>& s,vector<int>& vis){
        int n = nums.size();
        if(s.size() == n){
            res.push_back(s);
            return;
        }

        for(int i = 0;i < n;i++){

            if(vis[i] == 1){
                continue;
            }

            s.push_back(nums[i]);
            vis[i] = 1;
            backtrack(nums,s,vis);
            s.pop_back();
            vis[i] = 0;
            
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vis = vector<int>(nums.size(), 0);
        backtrack(nums,s,vis);
        return res;
        
    }
};
