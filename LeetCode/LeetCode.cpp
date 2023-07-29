#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{   
    for (int i = m; i < n + m; i++)
        nums1[i] = nums2[i - m];

    for (int i = 0; i < m + n; i++)
        for (int j = 0; j < m + n; j++)
        {
            if (nums1[i] < nums1[j])
            {
                int t = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = t;
            }
        }
}

int main()
{
    std::vector<int> nums1 {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    //std::vector<int> nums1 {0};
    //int m = 0;
    //std::vector<int> nums2 {1};
    //int n = 1;

    //merge(nums1, m, nums2, n);

    //std::vector<int> nums1 {0};
    //int m = 0;
    //std::vector<int> nums2 {1};
    //int n = 1;

    //merge(nums1, m, nums2, n);
}
