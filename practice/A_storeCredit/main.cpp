#include <iostream>
#include <vector>
#include <fstream>
using namespace std; // bad usage, only for competition

int main()
{
	ifstream	infile;
	ofstream	outfile;
	
	infile.open("A.in");
	outfile.open("A.out");

	vector<int>	v;
	int	N; // Number of Tests
	int	C; // Total Credit amount
	int	I; // Number of Items in
	int	P; // Price

	infile >> N;

	for (int i = 0; i < N; ++i) {
		infile >> C;
		infile >> I;
		outfile << "Case #" << i + 1 << ": ";

		for (int j = 0; j < I; ++j ) {
			infile >> P;
			v.push_back(P);
			for (int k = 0; k < j; ++k ) {
				if (v.at(j) + v.at(k) == C) { 
					outfile << k + 1 << " " << j + 1 << endl;
				}
			}
		}	
		v.clear();
	}
	infile.close();
	outfile.close();
	return 0;
}

