class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int mid=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[i]<=nums[mid]){
                if(nums[i]<=target && target<=nums[mid])
                    j=mid-1;
                else
                    i=mid+1;
            }
            else{
                if(target>=nums[mid] && nums[j]>=target)
                    i=mid+1;
                else
                    j=mid-1;
            }
        }
        return -1;
    }
};