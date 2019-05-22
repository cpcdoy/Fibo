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
 * @return
 **/
int main(int argc, char** argv)
{
	fibo f;
	tester t;

	if (argc == 2)
	{
		std::cout << "Testing both methods: loops vs no loops" << std::endl;
		std::cout << "Results: Outputs match " << t.get_match_percentage(f, std::atoi(argv[1])) << " %" << std::endl;
		std::cout << "This is due to precision loss when using our second \"no loops\" method" << std::endl;
	}
	else
		std::cout << "Computes the first n even numbers from the fibonacci sequence using 2 methods and compares their results.\nUsage: fibonacci n\n\nArgs:\n     - n: number of even fibonacci numbers to compute" << std::endl;

    return 0;
}
