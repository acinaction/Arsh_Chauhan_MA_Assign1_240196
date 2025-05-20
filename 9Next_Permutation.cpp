class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return;
        int check=1;
        for(int i=1;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                check=0;
            }
        }
        if(check==1 && nums[0]<nums[1]){
            int min=1;
             for(int i=1;i<n;i++){
                if(nums[i]>nums[0] && nums[i]<nums[min]){
                    min=i;
                }
             }
             swap(nums[0],nums[min]);
             sort(nums.begin()+1,nums.end());
        }
        else if(check==0){
            auto it=nums.end()-1;
            // while(1){
            //     if(*(it)>*(it-1)){
            //         swap(*(it),*(it-1));
            //         break;
            //     }
            //     it--;
            // }
            vector<int> v(n-1);
            for(int i=1;i<n;i++){
                v[i-1]=nums[i];
            }
            nextPermutation(v);
            for(int i=1;i<n;i++){
                nums[i]=v[i-1];
            }
        }
        else if(check==1 && nums[0]>nums[1]){
            sort(nums.begin(),nums.end());
        }
    }
};