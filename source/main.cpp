#include <iostream>
#include <fstream> 
#include <set>
#include <list> 
#include <climits> 

#include "Graph.hpp" 


using namespace std; 

int main(int argc, char**argv)
{
	string flightFile; 
	int airportCost; 
	//start & destination
	string start; 
	string destination; 


	cout << "Flight datafile name: "; 
	cin >> flightFile; 
	cout << "Cost of using one airport? "; 
	cin >> airportCost; 
	cout << "Airport traveling between <port1> <destination>: "; 
	cin >> start; cin >> destination; 

	
	ifstream flights(flightFile); 
	Graph fGraph(flights); 
	
		


	set<string> verticies = fGraph.getVertexes(); 
	set<string> visited; 

	// main algo loop 
	for (string vertex:verticies) 
	{
		while (!visited.contains(vertex))
		{
			

		}


	}
	

	



	return 0; 
}
