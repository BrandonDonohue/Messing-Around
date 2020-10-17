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
		<< "\tstd::cout << \"Child says hello!\" << std::endl;\n"
		<< "}";

	ofs.close();

	//std::system("g++ Child.cpp -o child");
	//std::system("./child");
}