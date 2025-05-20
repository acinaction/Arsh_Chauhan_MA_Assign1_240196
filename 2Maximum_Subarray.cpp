https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxsum(vector<int> nums,int s,int e){
        int sum=0;
        int max=-2147483648;
        for(int i=0;i+s<=e;i++){
            sum+=nums[i+s];
            if(sum>max) max=sum;
        }
        return max;
    }

    // int maxSubArray(vector<int>& nums) {
    //     int ans;
    //     int max=-2147483648;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         int a=maxsum(nums,i,n-1);
    //         if(a>max) max = a;
    //     }
    //     return max;
    // }


    int maxSubArray(vector<int>& nums) {
        int ans;
        int max=-2147483648;
        int n=nums.size();
        auto it=lower_bound(nums.begin(),nums.end(),0);
        int ispositive=1;
        if(it==nums.end()){
            ispositive=0;
        }
        if(ispositive==1){
            for(int i=0;i<n;i++){
            if(nums[i]>=0){
                int a = maxsum(nums,i,n-1);
                if(a>max) max=a;
            }
        }
        }
        else{
            for(int i=0;i<n;i++){
                int b = maxsum(nums,i,n-1);
                if(b>max) max=b;
            }
        }
        return max;
    }
};