int substringcount(string& str) 
{
	int n = str.length();
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] == 'A')
		{
			for (int j = i + 1; j < n; j++)
			{
				if (str[j] == 'B')
				{
					count++;
				}
			}
		}
	}
	return count;
}

int postofficeLocation(vector<double>& coords)
{
	int n = coords.size();
	double avg;
	vector<double> avgs;

	for (int i = 0; i < n; i++)
	{
		avg = 0;
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				avg += (coords[j] - coords[i]);
			}
			else avg += (coords[i] - coords[j]);
		}
		avg = (avg / n);
		avgs.push_back(avg);
	}

	double min = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (avgs[i] < min || i == 0)
		{
			min = avgs[i];
			index = i;
		}
	}
	return index;
}

int maxArea(vector<int>& height) {
        int ptr1 = 0;
        int ptr2 = height.size()-1;
        int l = ptr2;
        int max = 0;
        int n = 0;

        for (int i = 0; i < l; i++)
        {
            if (height[ptr1] < height[ptr2])
            {
                n = height[ptr1] * (l-i);
                ptr1++;
            }
            else 
            {
                n = height[ptr2] * (l-i);
                ptr2--;
            }

            if (n > max)
            {
                max = n;
            }
        }
        return max;
    }
