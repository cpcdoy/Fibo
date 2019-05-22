#pragma once

# include <math.h>

class fibo
{
	public:
		fibo() { }

		unsigned long long int get_even_sum(int n, bool no_loops = false);

	private:
		const double phi = (1.0 + sqrt(5.0)) / 2.0;
		const double psi = (1.0 - sqrt(5.0)) / 2.0;

		unsigned long long int even_sum(int n);
		unsigned long long int even_sum_no_loop(int n);

		double reverse_fib(unsigned long long int fn);
		
		unsigned long long int get_k(unsigned long long int n);
};
