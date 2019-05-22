#pragma once

// For math functions
# include <math.h>

/**
 * @brief Fibo class to compute sum of even fibonacci numbers in 2 different ways
 *
 **/
class fibo
{
	public:
		// Empty constructor
		fibo() { }

		/**
		 * @brief Wrapper function for the fibo computations
		 *
		 * @param n Until when to sum our fibo numbers
		 * @param no_loops Which algorithm to use: loops or no loops
		 *
		 * @return even sum of fibo numbers
		 **/
		unsigned long long int get_even_sum(int n, bool no_loops = false);

	private:
		// Constants used in our code
		const double phi = (1.0 + sqrt(5.0)) / 2.0;
		const double psi = (1.0 - sqrt(5.0)) / 2.0;

		/**
		 * @brief Computes the sum of even fibo numbers using loops
		 * First method:
		 * This one is iterative and tries to compute only the even numbers by skipping the odd ones
		 *
		 * @param n Until when to sum our fibo numbers
		 *
		 * @return even sum of fibo numbers
		 **/
		unsigned long long int even_sum(int n);

		/**
		 * @brief Computes the sum of even fibo numbers using a closed form
		 *
		 * @param n Until when to sum our fibo numbers
		 *
		 * @return even sum of fibo numbers
		 **/
		unsigned long long int even_sum_no_loop(int n);
};
