class Solution {
public:
    int f=INT_MAX;
    int s=INT_MIN;
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        findfst(nums,target);
        findlst(nums,target);
        vector<int> ans ;
        for (int i = f; i < s+1; i++)
        {
            ans.push_back(i);
        }
        
        return ans;
    }
    
    void findfst(vector<int> arr,int t){
        int i=0,j=arr.size()-1;
        int mid=0;
        while (i<=j)
        {
            mid=(i+j)/2;
            if(arr[mid]==t){
                f=min(f,mid);
                j=mid-1;
            }
            else if (arr[mid]<t)
            {
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            
        }
        
    }

    void findlst(vector<int> arr,int t){
        int i=0,j=arr.size()-1;
        int mid=0;
        while (i<=j)
        {
            mid=(i+j)/2;
            if(arr[mid]==t){
                s=max(s,mid);
                i=mid+1;
            }
            else if (arr[mid]<t)
            {
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            
        }
        
    }
};