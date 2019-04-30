#include <fstream>
#include "Vector.h"

int main() {
	ifstream in("in.txt");
	tree t;
	Vector ts;
	while (!in.eof()) {
    in >> t;
	ts.add(t);
	}
	
	for (int i = 0; i < ts.size(); i++) {
		cout << ts[i] << endl;
	}


	

	
	system("pause");
}