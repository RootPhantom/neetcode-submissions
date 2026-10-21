class Solution {
    bool check(vector<int> &nums){
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++){
            if(freq[nums[i]] == 0){
                freq[nums[i]]++;
            }
            else{
                return false;
            }
        }
        return true;
    }
public:
    bool hasDuplicate(vector<int>& nums) {
        return !check(nums);
    }
};