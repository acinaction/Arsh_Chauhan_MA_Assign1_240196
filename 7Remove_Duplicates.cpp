https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        // while(it!=nums.end()){
        //     if(it==nums.begin()){
        //         it++;
        //     }
        //     else if((*it)==(*(it-1))){
        //         nums.erase(it);
        //     }
        //     else{
        //         it++;
        //     }
        // }


        // while(it!=nums.end()){
        //     int a = *it;
        //     it++;
        //     while(it!=nums.end() && (*it)==a){
        //         nums.erase(it);
        //     }
        // }

        while(it!=nums.end()){
            int a = *it;
            it++;
            while(it!=upper_bound(nums.begin(),nums.end(),a)){
                nums.erase(it);
            }
        }
        return nums.size();
    }
};