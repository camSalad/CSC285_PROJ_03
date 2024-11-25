#include <iostream>
#include <fstream> 

using namespace std; 

int main(int argc, char**argv)
{
	if (argc != 2) { cerr << "USAGE: ./flighting <file name>"  << endl; }
	
	ifstream flights(argv[0]); 

	



	return 0; 
}
