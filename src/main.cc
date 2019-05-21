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

	for (int i = 0; i < 20; i++)
		std::cout << "no loop " <<  f.get_even_sum(i) << std::endl;

	for (int i = 0; i < 20; i++)
		std::cout << f.get_even_sum(i, false) << std::endl;

    return 0;
}
