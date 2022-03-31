#include <iostream>
#include<vector>

using namespace std;
//
//int duplicateInArray0(vector<int>& nums){
//    int n=nums.size();
//    for(int i=0;i<n-1;i++)
//        for(int j=i+1;j<n;j++)
//            if((nums[i]^nums[j])==0)
//                return nums[i];
//    return 0;
//}

int duplicateInArray(vector<int>& nums){
    int l=1,r=nums.size()-1;
    while(l<r)
    {
        cout<<"l:"<<l<<" "<<"r:"<<r<<endl;
        int mid=l+r>>1;
        cout<<"mid:"<<mid<<endl;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=l && nums[i]<=mid)
                count++;
        }
        cout<<"count"<<count<<endl;
        if(count>mid-l+1)r=mid;
        else l=mid+1;
        cout<<"l:"<<l<<" "<<"r:"<<r<<endl;
    }
    return l;
}

int main()
{
    int a[10]={2,9,5,3,4,8,6,7,4,1};
    vector<int>nums;
    nums.insert(nums.begin(),a,a+11);
//    cout<<":"<<duplicateInArray0(nums)<<endl;
    cout<<duplicateInArray(nums)<<endl;

    return 0;
}