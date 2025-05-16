// This solution give the TLE
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            
            int size=nums.size();
            for(int i=0;i<size;i++){
                int item=nums[i];
                for(int j=i+1;j<size;j++){
                    if(item==nums[j]){
                        return true;
                    }
                }
            }
          return false;
        }
    };
    //this solution is accepted

    #include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            if (++freq[num] > 1) {
                return true;
            }
        }

        return false;
    }
};
