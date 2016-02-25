#include <iostream>
#include <fstream>
#include <map>

using namespace std;


int 	main() {
	ifstream	infile;
	ofstream	outfile;

	infile.open("C.in");
	outfile.open("C.out");

	map<char, int>	m = {
	{'a', 2}, {'b', 22}, {'c', 222}, {'d', 3}, {'e', 33},
	{'f', 333}, {'g', 4}, {'h', 44}, {'i', 444}, {'j', 5},
	{'k', 55}, {'l', 555}, {'m', 6}, {'n', 66}, {'o', 666},
	{'p', 7}, {'q', 77}, {'r', 777}, {'s', 7777}, {'t', 8},
	{'u', 88}, {'v', 888}, {'w', 9}, {'x', 99}, {'y', 999},
	{'z', 9999}, {' ', 0}
	};

	int	N;
	string	s;

	infile	>>	N;	
	getline(infile, s); 

	for (int i = 0; i < N; ++i) {
		outfile << "Case #" << i + 1 << ": ";
		getline(infile, s);
		for (int j = 0; j < s.size(); ++j) {
			if (j != 0 && m[s[j]]%10 == m[s[j - 1]]%10)
				outfile << " ";
			outfile << m[s[j]];
		}
		outfile << endl;
	}
	return 0;

}
