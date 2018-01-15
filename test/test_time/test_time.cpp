#include <iostream>
using namespace std;

#include "../../scr/liton_time.hpp"

void test_get_time()
{
	string time_str = liton::sp::get_time();
	cout << time_str << endl;
}

int main(int argc, char** argv)
{
    test_get_time();
	return 0;
}
