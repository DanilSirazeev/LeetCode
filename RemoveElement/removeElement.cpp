#include <iostream>
#include <vector>
#include <algorithm>

//Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
//The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

//Example 1:
//Output: 2, nums = [2,2,_,_]

class Solution {
public:
    int removeElement(std::vector<int32_t>& nums, int32_t val) 
    {
        auto iter = std::remove(nums.begin(), nums.end(), val);

        nums.erase(iter, nums.end());

        return nums.size();
    }
};

int main()
{
    Solution obj;

    std::vector<int32_t> temp{1,2,2,1};

    obj.removeElement(temp, 2);
}

