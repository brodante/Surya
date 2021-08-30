#include <iostream>

int main()
{

    long T, n, k, total, temp, result, days, remainingQueries, flag;
    std::cin >> T;

    for (long i = 0; i < T; i++)
    {
        total = days = remainingQueries = flag = 0;

        std::cin >> n >> k;
        for (long j = 0; j < n; j++)
        {
            std::cin >> temp;
            remainingQueries += temp;

            if (remainingQueries >= k)
            {
                remainingQueries -= k;
            }
            else if (flag == 0)
            {
                std::cout << days + 1 << std::endl;
                flag += 1;
            }
            days += 1;
        }
        if (flag == 0)
            if (remainingQueries < k)
                std::cout << days << std::endl;
            else
                std::cout << days + 1 + (remainingQueries / k) << std::endl;
    }

    return 0;
}
