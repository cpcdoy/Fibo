#include "fibo.hh"
#include <iostream>

unsigned long long int fibo::get_even_sum(int n, bool no_loops)
{
	if (no_loops)
		return this->even_sum_no_loop(n);
	else
		return this->even_sum(n);
}

unsigned long long int fibo::even_sum(int n)
{
	unsigned long long int fn_2 = 2;
	unsigned long long int fn_1 = 8;

	if (n <= 2)
		return fn_2;
	else if (n <= 5)
		return fn_1;

	unsigned long long int sum = fn_2 + fn_1;

	n -= 6;
	n /= 3;
	int i = 0;
	while (true)
	{
		unsigned long long int fn = 4 * fn_1 + fn_2;

		if (i++ >= n)
			return sum;

		sum += fn;

		fn_2 = fn_1;
		fn_1 = fn;
	}
}

unsigned long long int fibo::even_sum_no_loop(int n)
{
	auto n_k = n / 3;
	std::cout << "r " << n_k << std::endl;
	auto phi3 = pow(phi, 3);
	auto psi3 = pow(psi, 3);

	auto r = (1.0 / sqrt(5.0)) * (
			  phi3 * ((1.0 - pow(phi3, n_k)) / (1.0 - phi3)) -
        	  psi3 * ((1.0 - pow(psi3, n_k)) / (1.0 - psi3)));



	return static_cast<unsigned long long int>(r);
}
