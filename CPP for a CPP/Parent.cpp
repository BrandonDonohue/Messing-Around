#include<iostream>
#include<fstream>
#include<cstdlib>

int main() {
	std::ofstream ofs;
	ofs.open("Child.cpp");

	ofs << "#include<iostream>\n"
		<< "#include<fstream>\n"
		<< "#include<cstdlib>\n\n"
		<< "int main(){\n"
		<< "\tstd::cout << \"How's it going?\" << std::endl;"
		<< "\tstd::string escape = \"go away\";\n\n"
		<< "\twhile(1){\n"
		<< "\t\tstd::string message;\n"
		<< "\t\tstd::getline(std::cin, message);\n\n"
		<< "\t\tif(message == escape)\n"
		<< "\t\t\tbreak;\n"
		<< "\t\telse\n"
		<< "\t\t\tstd::cout << message << std::endl;\n"
		//<< "\t\t\tstd::cout << \"\033[1;31m\" << message << \"\033[0m\n\""
		<< "\t}\n"
		<< "}";

	ofs.close();

	std::cout << "\033[1;31mbold red text\033[0m\n";

	std::system("g++ Child.cpp -o child");
	std::system("./child");
}