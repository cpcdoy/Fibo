#include <iostream>
#include <cstdlib>

#include "./fibo/fibo.hh"
#include "./tester/tester.hh"

/**
 * @brief Fibo entry point (main)
 *
 * @param argc
 * @param argv
 *
 * @return error code
 **/
int main(int argc, char** argv)
{
	// Make sure we have enough args
	if (argc == 2 && std::atoi(argv[1]) >= 0)
	{
		// Instanciate our objects
		fibo f;
		tester t;

		// Print out the results
		std::cout << "Testing both methods: loops vs no loops" << std::endl;
		std::cout << "Results: Outputs match " << t.get_match_percentage(f, std::atoi(argv[1]) + 1) << " %" << std::endl;
		std::cout << "NOTE: There is precision loss when using the second \"no loops\" method" << std::endl;

		return 0;
	}
	else
		// Display help
		std::cout << "Computes the first n even numbers from the fibonacci sequence using 2 methods and compares their results.\nUsage: fibonacci n\n\nArgs:\n     - n: number (n > 0) of even fibonacci numbers to compute" << std::endl;

	return 1;
}
