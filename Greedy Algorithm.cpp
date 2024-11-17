double jobScheduler(vector<double> jobs)
{
    sort(jobs.begin(), jobs.end());
    double total = 0;
    double add = 0;
    for (int i = 0; i < jobs.size(); i++)
    {
        add = add + jobs[i];
        total += add;
    }
    return total;
}
