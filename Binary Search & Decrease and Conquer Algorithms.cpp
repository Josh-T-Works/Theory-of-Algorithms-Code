int missingInt(vector<int> A)
{
	int l = 0;
	int r = A.size(); r--;
	int m = 0;

	while (l <= r)
	{
		m = (l + r) / 2;
		if ((m+1) == A[m])
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return l + 1;
}

bool isPerfectSquare(int num) {
    int left = 1;
    int right = num;

    while (left <= right)
    {
        double mid = (left + right) / 2;
        double n = num / mid;
        if (mid == n)
        {
            return true;
        }
        else if (mid < n)
        {
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0;
    int col = matrix[0].size() - 1;
    int m = matrix.size();

    while (row < m && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true;
        }
        if (matrix[row][col] > target)
        {
            col--;
        }
        else row++;
    }
    return false;
    }
