#include <iostream>
#include <vector>

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int32_t> vec;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    vec.push_back(i);
                    vec.push_back(j);
                }
            }
        }

        return vec;
    }

    void print_vec(const std::vector<int32_t>& vec)
    {
        for (const auto& i : vec)
        {
            std::cout << i;
        }
    }
};

int main(int argv, char** argc)
{
    std::vector<int32_t> vec{3,2,3};

    Solution obj;

    obj.print_vec(obj.twoSum(vec, 6));

    return 0;
}
