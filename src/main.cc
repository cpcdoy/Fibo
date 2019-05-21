#include <iostream>

#include "./fibo/fibo.hh"

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

	std::cout << f.get_even_sum(18446744073) << std::endl;
	std::cout << f.get_even_sum(6) << std::endl;

    return 0;
}
