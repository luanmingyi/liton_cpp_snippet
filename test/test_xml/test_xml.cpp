#include <iostream>
#include <string>
using namespace std;

#define SP_TINYXML
#include "lion_snippets.hpp"
#include "tinyxml2.h"

void test_load_xml(std::string xml_file_name, std::string root_node_name)
{
	tinyxml2::XMLDocument xml_file;
	try
	{
		const tinyxml2::XMLElement* xml = liton_sp::xml::load_xml(xml_file, xml_file_name, root_node_name);
		std::cout << "load succeed" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_check_xmlnode(const std::string &node_name)
{
	tinyxml2::XMLDocument xml_file;
	try
	{
		const tinyxml2::XMLElement* xml = liton_sp::xml::load_xml(xml_file, "case_config.xml", "case");
		liton_sp::xml::check_xmlnode(xml, node_name);
		std::cout << "node exist" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_get_xmlnode(const std::string &node_name)
{
	tinyxml2::XMLDocument xml_file;
	try
	{
		const tinyxml2::XMLElement* xml = liton_sp::xml::load_xml(xml_file, "case_config.xml", "case");
		const tinyxml2::XMLElement* xml_node = liton_sp::xml::get_xmlnode(xml, node_name);
		std::cout << xml_node->GetText() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(int argc, char** argv)
{
	test_load_xml("no_file", "no_root");
	test_load_xml("case_config.xml", "no_root");
	test_load_xml("case_config.xml", "case");
	test_check_xmlnode("no_node");
	test_check_xmlnode("root");
	test_get_xmlnode("no_node");
	test_get_xmlnode("name");
	return 0;
}
