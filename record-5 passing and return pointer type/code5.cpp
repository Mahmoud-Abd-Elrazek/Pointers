// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>

using namespace std;

void print () { cout << "Welcome\n";}

int* F1 () {
	int n = 10;
	return &n; 
}
// @m_abrazeg
int* F2 () {
	int* n = new int(10);
	return n;
}

int main() {

	int *p = F2();
	print();
	cout << *p << endl;

	return 0;
}
