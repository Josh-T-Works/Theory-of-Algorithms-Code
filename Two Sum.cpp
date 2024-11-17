vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 2)
        {
            nums.clear();
            nums.push_back(0);
            nums.push_back(1);
            return nums;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                if (j == i)
                {
                    continue;
                }
                else
                {
                    if (target == nums[i] + nums[j])
                    {
                        nums.clear();
                        nums.push_back(i);
                        nums.push_back(j);
                        return nums;
                    }
                }
            }
        }
        return nums;
    }
