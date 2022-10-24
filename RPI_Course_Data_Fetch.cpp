#include<iostream>
#include<fstream>
#include<string>
#include<vector>

void get_colnume(std::ofstream& output_csv_file)
{
	output_csv_file <<"Select,"
		            <<"CRN,"
		            <<"Subj,"
		            <<"Crse,"
		            <<"Sec,"
		            <<"Cmp,"
		            <<"Cred,"	
		            <<"Title,"
		            <<"Days,"
		            <<"Time,"
		            <<"Cap,"
		            <<"Act,"
		            <<"Rem," << std::endl;
}

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
	get_colnume(output_csv_file);


}