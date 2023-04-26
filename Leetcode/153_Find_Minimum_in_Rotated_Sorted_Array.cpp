class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;

        int minval=INT_MAX;

        while(start<=end)
        {
            if(nums[start]<nums[end])
            {
                minval=min(minval,nums[start]);
                break;
            }

            int mid=(start+end)/2;
            
            if(nums[start]<=nums[mid])
            {
                minval=min(minval,nums[start]);
                start=mid+1;
            }

            else
            {
                minval=min(minval,nums[mid]);
                end=mid-1;
            }
        }
        return minval;
    }
};