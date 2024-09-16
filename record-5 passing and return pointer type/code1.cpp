// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;

void F1 (int*x) { 
	(*x)+= 1;
	cout << x << " " << " " << *x << endl;
	// 0x61ff0c 11
}
int main() {

	int n = 10;
	F1(&n);
	cout << &n << " " << n  << "\n" ;
	// 0x61ff0c 11

	return 0;
}