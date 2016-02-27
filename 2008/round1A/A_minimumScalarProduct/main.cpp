#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int	main() {
	ifstream	infile;
	ofstream	outfile;

	vector<long long>	x, y;	
	int	numCase, i, j, n;
	long long c;

	infile.open("A-large-practice.in");
	outfile.open("A.out");
	infile >> numCase;

	for (i = 0; i < numCase; ++i) {
		infile >> n;
		for (j = 0; j < n; ++j) {
			infile >> c;	
			x.push_back(c);
		} 
		for (j = 0; j < n; ++j) {
			infile >> c;
			y.push_back(c);
		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end(), greater<long long>());
		long long res = 0;
		for (j = 0; j < n; ++j)
			res += (x[j] * y[j]);
		outfile << "Case #" << i + 1 << ": " << res << endl;
		x.clear();
		y.clear();
	}
	infile.close();
	outfile.close();
	return (0);
}
