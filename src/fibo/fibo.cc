#include "fibo.hh"

long long int fibo::get_even_sum(int n)
{
	return this->even_sum(n);
}

long long int fibo::even_sum(int n)
{
	long long int fn_2 = 2;
	long long int fn_1 = 8;

	long long int sum = fn_2 + fn_1;

	while (true)
	{
		long long int fn = 4 * fn_1 + fn_2;

		if (fn >= n)
			return sum;

		sum += fn;

		fn_2 = fn_1;
		fn_1 = fn;
	}
}
