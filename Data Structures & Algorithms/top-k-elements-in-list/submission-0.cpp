class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> hash;

        for(int l:nums){
            hash[l] += 1;
        }
        
        vector<pair<int,int>> freq;

        for(auto& c:hash){
            freq.push_back({c.first,c.second});
        }

        sort(freq.begin(),freq.end(),
        [](auto a,auto b){
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i = 0;i<k;i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
