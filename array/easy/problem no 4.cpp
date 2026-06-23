// Remove duplicates from sorted array
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // if (nums.size() == 0 ){
        //      return O;
        // }
        int i = 0;
        int j = 1;
        while (j < nums.size())
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};