#pragma once

class fibo
{
	public:
		fibo() { }

		long long int get_even_sum(int n, bool no_loops = true);

	private:
		long long int even_sum(int n);
		long long int even_sum_no_loop(int n);
};
