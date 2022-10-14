class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix = nums;
        for(int i=1; i<nums.size(); i++)
            prefix[i] = nums[i] + prefix[i-1];
        for(int i=0; i<nums.size(); i++){
            if(i==0){
                if(0 == prefix[nums.size()-1] - prefix[i])
                    return i;
            }
            else if(prefix[i-1] == prefix[nums.size()-1] - prefix[i])
                return i;
        }
    return -1;
    }
};
