class Solution {
public:
    int f=INT_MAX;
    int s=INT_MIN;
    vector<int> searchRange(vector<int>& nums, int target) {
        findfst(nums,target);
        findlst(nums,target);
        vector<int> arr={-1,-1};
        if(f!=INT_MAX) arr[0]=f;
        if(s!=INT_MIN) arr[1]=s;
        return arr;
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