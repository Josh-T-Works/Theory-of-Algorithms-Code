double closestDistance(vector<double> v)
{
	sort(v.begin(), v.end()); //STL function
	double min = INT_MAX;
	int j = v.size() - 1;
	if (j+1 <= 1) return -1;
	for (int i = 0; i < j; i++)
	{
		double x = sqrt(pow(v[i] - v[i + 1], 2));
		if (x < min) min = x;
	}
	return min;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sorted;
        map<string, vector<string>> groups;
        int j = strs.size();
        for (int i = 0; i < j; i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            groups[s].push_back(strs[i]);
        }
        for (auto g : groups)
        {
            sorted.push_back(g.second);
        }
        return sorted;
    }

