#include <iostream>
#include <vector>
#include <string>

//Given an integer x, return true if x is a palindrome, and false otherwise.

//Input: x = 121
//Output: true

class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string str = std::to_string(x);

        std::vector<int32_t> vec;

        for (int32_t i = 0; i < str.size(); ++i)
        {
            vec.push_back(str[i] - '0');
        }

        for (int32_t i = 0, j = vec.size() - 1; i <= j; ++i, --j)
        {
            if (vec[i] != vec[j])
            {
                return false;
            }
        }

        return true;
    }

};

int main(int argv, char** argc)
{
    Solution obj;

    int32_t x = -121    ;

    std::cout << std::boolalpha << obj.isPalindrome(x) << "\n";

    return 0;
}