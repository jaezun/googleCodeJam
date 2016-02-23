#include <iostream>
#include <fstream>
#include <sstream>
#include <list>

using namespace std;


int	main() {
	ifstream	infile;
	ofstream	outfile;

	infile.open("B.in");
	outfile.open("B.out");

	string	L, L_ss;	
	int	N; // Number of cases
	list<string>	lst;

	infile >> N;
	getline(infile, L);

	for (int i = 0; i < N; ++i) {
		outfile << "Case #" << i + 1 << ": ";
		getline(infile, L);
		stringstream ss(L);
		while (ss >> L_ss)
			lst.push_back(L_ss);
		lst.reverse();
		for (auto i : lst)
			outfile << i << " ";  
		outfile << endl;
		lst.clear();
	}
	infile.close();
	outfile.close();
	return 0;
}
