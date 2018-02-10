#include <iostream>
using namespace std;

#include "../../scr/liton_cpp_snippets/lion_snippets.hpp"

void test_open_file_c()
{
	FILE* f = liton_sp::file::open_file_c("test_open_file_c.txt", "w");
	fprintf(f, "this is a test\n");
	fclose(f);
}

int main(int argc, char** argv)
{
	test_open_file_c();
	return 0;
}
