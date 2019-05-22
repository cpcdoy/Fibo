#pragma once

# include "../fibo/fibo.hh"

class tester
{
	public:
		tester() { }

		float get_match_percentage(fibo f, int n);

	private:
		float match_percentage(fibo f, int n);
};
