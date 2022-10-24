#include<iostream>
#include<fstream>
#include<string>
#include<vector>

int main(int argc, char* argv[])
{
	std::ifstream input_csv_file;
	std::ofstream output_csv_file;
	std::string temp_buffer = "";

	//open input file
	input_csv_file.open(argv[1],std::ios::in);
	if(!input_csv_file.good())
	{
		std::cerr << "cannot open input file" << std::endl;
	}
	output_csv_file.open("fall-2022.csv");
	if (!output_csv_file)
	{
		std::cerr << "cannot open output file" << std::endl;
	}
}