#pragma once

# include "../fibo/fibo.hh"

/**
 * @brief Tester class to compute and test the difference in accuracy of both fibo methods
 *
 **/
class tester
{
	public:
		// Empty constructor
		tester() { }

		/**
		 * @brief Wrapper function for the fibo computations
		 *
		 * @param f The fibo object to score
		 * @param n Until when to sum our fibo numbers
		 *
		 * @return even sum of fibo numbers
		 **/
		float get_match_percentage(fibo f, int n);

	private:
		/**
		 * @brief Wrapper function for the fibo computations
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
		float match_percentage(fibo f, int n);
};
