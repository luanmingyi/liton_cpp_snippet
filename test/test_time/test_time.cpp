#include <iostream>
using namespace std;

#include "lion_snippets.hpp"

void test_get_time()
{
	string time_str = liton_sp::time::get_time();
	cout << time_str << endl;
}

int main(int argc, char** argv)
{
	test_get_time();
	return 0;
}
