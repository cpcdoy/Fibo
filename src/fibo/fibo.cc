#include "fibo.hh"

// Used for std::cout
#include <iostream>

/**
 * @brief Wrapper function for the fibo computations
 *
 * @param n Until when to sum our fibo numbers
 * @param no_loops Which algorithm to use: loops or no loops
 *
 * @return even sum of fibo numbers
 **/
unsigned long long int fibo::get_even_sum(int n, bool no_loops)
{
	if (no_loops)
		return this->even_sum_no_loop(n);
	else
		return this->even_sum(n);
}

/**
 * @brief Computes the sum of even fibo numbers using loops
 * First method:
 * This one is iterative and tries to compute only the even numbers by skipping the odd ones
 *
 * @param n Until when to sum our fibo numbers
 *
 * @return even sum of fibo numbers
 **/
unsigned long long int fibo::even_sum(int n)
{
	// Our inital values
	unsigned long long int fn_2 = 2;
	unsigned long long int fn_1 = 8;

	// The first two even sums
	if (n == 0)
		return 0;
	else if (n <= 2)
		return fn_2;
	else if (n <= 8)
		return 10;

	// The first sum we start off of
	unsigned long long int sum = fn_2 + fn_1;

	// Because we know that we skipped 2 even number and
	// that even number happen every 3 fibo numbers
	n -= 6;
	n /= 3;

	int i = 0;
	while (true)
	{
		// Skip the odd numbers
		unsigned long long int fn = 4 * fn_1 + fn_2;

		// Return the result if we reach the number of numbers we want
		if (i++ >= n)
			return sum;

		// Sum the next even number
		sum += fn;

		// Advance our reference even numbers
		fn_2 = fn_1;
		fn_1 = fn;
	}
}

/**
 * @brief Computes the sum of even fibo numbers using a closed form
 *
 * @param n Until when to sum our fibo numbers
 *
 * @return even sum of fibo numbers
 **/
unsigned long long int fibo::even_sum_no_loop(int n)
{
	// The first two even sums
	if (n == 0)
		return 0;
	else if (n <= 2)
		return 2;
	else if (n <= 8)
		return 10;

	// We know that even number happen every 3 fibo numbers
	auto n_k = n / 3;

	// Precompute constants
	auto phi3 = pow(phi, 3);
	auto psi3 = pow(psi, 3);

	// Closed form fibonacci for the sum of even elements
	auto r = (1.0 / sqrt(5.0)) * (
			  phi3 * ((1.0 - pow(phi3, n_k)) / (1.0 - phi3)) -
        	  psi3 * ((1.0 - pow(psi3, n_k)) / (1.0 - psi3)));


	// Return an integer
	return static_cast<unsigned long long int>(r);
}
