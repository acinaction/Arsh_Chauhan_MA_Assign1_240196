class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int left=i+1;
        int right=n-1;
        while(i<n-2){
            if(nums[left]+nums[right]+nums[i]==0){
                v.push_back({nums[i],nums[left],nums[right]});
                left++;
                while(nums[left]==nums[left-1] && left<right) left++;
                right--;
                while(nums[right]==nums[right+1] && right>left){ right--;}
            }
            else if(nums[left]+nums[right]<-nums[i]){
                left++;
                while(nums[left]==nums[left-1] && left<right) left++;
            }
            else{
                right--;
                while(nums[right]==nums[right+1] && right>left){ right--;}
            }

            if(left>=right){
                i++;
                while(i<=n-1 && nums[i]==nums[i-1]) i++;
                left=i+1;
                right=n-1;
            }
        }
        return v;
    }
};