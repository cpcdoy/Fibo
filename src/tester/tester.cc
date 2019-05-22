#include "tester.hh"

# include <iostream>

float tester::get_match_percentage(fibo f, int n)
{
	return this->match_percentage(f, n);
}

float tester::match_percentage(fibo f, int n)
{
	float score = 0;
	for (int i = 0; i < n; i++)
	{
		auto f1 = f.get_even_sum(i);
		auto f2 = f.get_even_sum(i, true);

		std::cout << f1 << " " << f2 << std::endl;

		score += (int)(f1 == f2);
	}

	return score / (float)n * 100;
}
