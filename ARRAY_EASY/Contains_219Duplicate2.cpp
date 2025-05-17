// this solution give the time limit exist
#include<vector>
#include<math.h>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {       
        for(int i=0;i<nums.size();i++){
            int item=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if((item==nums[j])&&(abs(i-j))<=k){
                    return true;
                }

            }
        }
        return false;
    }
};