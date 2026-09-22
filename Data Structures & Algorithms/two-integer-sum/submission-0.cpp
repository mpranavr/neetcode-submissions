class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    unordered_map<int,int> num;
    int comp;

    for(int i = 0;i<size(nums);i++){
        
        comp = target - nums[i];
        if(num.find(comp)==num.end()){
            num[nums[i]] = i;
        }
        else{
            return {num[comp],i};
        }
        
    }

    return {};

    }
};
