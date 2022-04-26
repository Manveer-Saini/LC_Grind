class Solution
{
public:
    double average(vector<int> &salary)
    {
        int sum = 0;
        double result = 0;
        double totalNumberOfValues = salary.size() - 2.0;

        for (auto value : salary)
        {
            sum += value;
        }

        int min = salary[0];
        int max = salary[0];

        // Get Min, Max and subtract from sum.
        for (auto value : salary)
        {
            if (value < min)
            {
                min = value;
            }

            if (value > max)
            {
                max = value;
            }
        }

        sum -= min;
        sum -= max;

        result = sum / totalNumberOfValues;

        return result;
    }
};