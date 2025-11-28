#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count=0;

        for(int i=0;i<nums1.size();i++)
        {
            count++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            count++;
        }

        int *mergeArr=new int[count];

        for(int i=0;i<count;i++)
        {
            if(nums1[i]>nums2[i] && nums1[i]!=0 && nums2[i]!=0)
            {
                mergeArr[i]=nums1[i];
            }
            else
            {
                mergeArr[i]=nums2[i];
            }
        }

        for (int i=0; i<count; i++) {
            cout << mergeArr[i] << " ";
        }

    }
};

int main()
{
    Solution *obj1=new Solution();
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};

    obj1->merge(arr1,3,arr2,3);

    return 0;
}