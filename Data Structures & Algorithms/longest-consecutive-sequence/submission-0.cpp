class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> has;
        int start;
        int max_len = 0;
        int curr_len = 0;
        for(int s:nums){
            has[s] += has[s] + 1;
        }

        for(int e:nums){

            if(has.find(e-1)==has.end()){
                start = e;
                curr_len = 1;
                while(has.find(start+1)!=has.end()){
                    curr_len += 1;
                    start = start+1;
                }
            }

            max_len = max(max_len,curr_len);
        }

        return max_len;
    }
};
