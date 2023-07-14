#include <iostream>
#include <vector>
#include <algorithm>

//Given a sorted array of distinct integers and a target value,
//return the index if the target is found. If not, return the index where it would be if it were inserted in order.

class Solution {
public:
    void print(const std::vector<int32_t>& vec)
    {
        std::for_each(vec.cbegin(), vec.cend(), [](int32_t value){std::cout << value << " ";});
    }

    int searchInsert(std::vector<int32_t>& nums, int32_t target) 
    {
        bool flag = false;
        int32_t index = -1;
        int32_t begin = 0;
        int32_t end = nums.size() - 1;
    
        while ((begin <= end) && (flag != true))
        {
            int32_t middle = (begin + end) / 2;

            if (nums[middle] == target)
            {
                flag = true;
                return middle;
            }

            //1 3 4 5

            if (nums[middle] > target)
            {
                end = middle - 1;
            }
            else
            {
                begin = middle + 1;
                index = middle + 1;
            }
        }

        if (index == -1)
        {
            return 0;
        }

        return index;
    }
};

int main(int32_t argv, char** argc)
{
    Solution obj;

    std::vector<int32_t> vec{2,3,5,6};

    obj.print(vec);
    std::cout << "\n" << obj.searchInsert(vec, 1) << "\n";

    return 0;
}