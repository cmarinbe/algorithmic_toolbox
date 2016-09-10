#include <iostream>
#include <vector>
#include "fibonacci_huge.h"

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long get_fibonacci_huge_fast(long long n, long long m) {
    if (n <= 1)
        return n;
	std::vector<int> period = get_period(n, m);
	int small_n = n % period.size();
    return period[small_n];
}

std::vector<int> get_period(long long n, long long m) {
	std::vector<int> period;
 	bool full_period = false;
	long long previous = 0;
	long long current  = 1;
	period.push_back(previous % m);
	period.push_back(current % m);
	while (not full_period) {
		long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
		period.push_back(current % m);
		full_period = true;
		for (int i=0; i<period.size()/2; i++) {
			if (period[i] != period[i+period.size()/2]) {
				full_period = false;
			}
		}
    }
	int period_size = period.size()/2;
	return period[0:period_size]; // only one period is needed
}
