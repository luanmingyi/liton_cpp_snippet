#include <iostream>
#include <fstream>
using namespace std;

#include "../../scr/lion_snippets.hpp"

void test_exec_except()
{
	ofstream out("out.txt");
	ofstream err("err.txt");
	liton_sp::debug::exec_except([]() {throw exception("exception"); }, out, err);
	out.close();
	err.close();
}

void test_exec_time()
{
	ofstream out("out.txt");
	double time = liton_sp::debug::exec_time(1000, [&]() {int a = 1; out << a; });
	out << endl;
	out << time << endl;
	out.close();
}

int main(int argc, char** argv)
{
	test_exec_except();
	test_exec_time();
	return 0;
}
