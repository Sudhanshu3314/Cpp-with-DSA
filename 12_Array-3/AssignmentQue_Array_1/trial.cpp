#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {5 ,5 , 5, 2, 2, 3, 4 ,4, 3, 2 , 3 ,5 , 6,  8, 1 ,3};

    // Sort the vector to group duplicate elements together
    sort(nums.begin(), nums.end());
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    // Useunique to move duplicate elements to the end of the vector
    auto uniqueElement = unique(nums.begin(), nums.end());

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    // Erase the duplicate elements from the vector
    nums.erase(uniqueElement, nums.end());

    // Print the unique elements
    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
