class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums1.size(); ++i){
            int max = -1;
            for(int j=0; j<nums2.size(); ++j){
                if(nums1[i]==nums2[j]){
                    while(j < nums2.size()){
                        if(nums1[i] < nums2[j++]){
                            max = nums2[j-1];
                            j =nums2.size();
                        }
                    }
                }
            }
            nums1[i] = max;
        }
    return nums1;
    }
};
