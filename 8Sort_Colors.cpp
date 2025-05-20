class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=0;j<nums.size()-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }

    int count0 = 0, count1 = 0, count2 = 0;

    for (int a : nums) {
        if (a == 0) count0++;
        else if (a == 1) count1++;
        else count2++;
    }

    int index = 0;
    while (count0--) nums[index++] = 0;
    while (count1--) nums[index++] = 1;
    while (count2--) nums[index++] = 2;
    }
};