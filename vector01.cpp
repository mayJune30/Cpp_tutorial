#include <iostream>
#include <vector>

int main()
{
	// vector 사용X
	int* numsPtr = new int[5];
	for(int i=0;i<5;i++)
	{
	numsPtr[i] = i;
	}
	delete numsPtr;

	// vector 사용O
	std::vector<int>nums(5);
	for (int i = 0; i < 5; i++)
	{
	nums[i] = i;
	}

	// 1.
	std::vector<int>nums{ 0,1,2,3,4 };
	std::cout << nums.size() << std::endl;

	nums.emplace_back(5);
	std::cout << nums.size() << std::endl;

	nums.pop_back();
	std::cout << nums.size() << std::endl;

	// 2.
	std::vector<int> nums{ 0,1,2,3,4 };
	nums.emplace_back(5);
	// 2-1.
	for (std::size_t idx = 0; idx < nums.size(); idx++)
	{
	 std::cout << nums[idx] << std::endl;
	}
	// 2-2.
	for (auto itr = nums.begin(); itr != nums.end(); itr++)
	{
		std::cout << (*itr) << std::endl;
	}
	// ranged for
	for (const int& num : nums)
	{
		std::cout << num << std::endl;
	}
}
