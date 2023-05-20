#include <iostream>
#include <vector>
#include <algorithm>

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]

std::vector<int32_t> twoSum(std::vector<int>& nums, int32_t target)
{
    std::sort(nums.begin(), nums.end());

    for (int32_t i = 0, j = nums.size()- 1; i < j;)
    {
        if (nums[i] + nums[j] == target)
        {
            return {i, j};
        }

        if (nums[i] + nums[j] > target)
        {
            --j;
        }
        else
        { 
            ++i;
        }
    }

    return {};
}

int32_t main(int32_t argv, char** argc)
{
    std::vector<int32_t> vec{7, 2, 15, 11};

    auto result = twoSum(vec, 18);

    if (!result.empty())
    {
        std::cout << result.front() << " " << result.back() << "\n";
    }
    
    return 0;
}
