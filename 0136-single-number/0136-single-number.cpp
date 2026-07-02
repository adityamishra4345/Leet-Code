class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        for(int val:nums){
            c=c^val;
            

        }
        return c;
    }
};