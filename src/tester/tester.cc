#include "tester.hh"

// Used for std::cout
# include <iostream>

/**
 * @brief Wrapper function to compute a score for the two fibo methods
 *
 * @param f The fibo object to score
 * @param n Until when to sum our fibo numbers
 *
 * @return even sum of fibo numbers
 **/
float tester::get_match_percentage(fibo f, int n)
{
	return this->match_percentage(f, n);
}

/**
 * @brief Computes a score for the two fibo methods
 *
 * Compute and see how both fibo algorithms math eachother
 * We want to see that at some point we loose precision because
 * of small precision loss in our computation
 * Fixing precision would require us to use an object that
 * handles big number in an exact way unlike the float and double types
 *
 * @param f The fibo object to score
 * @param n Until when to sum our fibo numbers
 *
 * @return even sum of fibo numbers
 **/
float tester::match_percentage(fibo f, int n)
{
	// Inital score
	float score = 0;
	for (int i = 0; i < n; i++)
	{
		// Compute both fibo algorithms
		auto f1 = f.get_even_sum(i);
		auto f2 = f.get_even_sum(i, true);

		// Output both results
		std::cout << i << ": " << f1 << " " << f2 << std::endl;

		// Accumulate score
		score += (int)(f1 == f2);
	}

	// Return the final score
	return score / (float)n * 100;
}
