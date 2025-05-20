class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m; // Created a map which would map the element to its occurrence. 
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]] = m[nums[i]] + 1; // Mapping each element to its number of occurrence. 
        }
        int ans;
        for(auto element : m){
            if(element.second>n/2){ // The element that occurs more than n/2 times is the majority element. 
                ans=element.first;
            }
        }
        return ans;
    }
};