// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>

using namespace std;

// @m_abrazeg
int* getArray (int n) { 
	int* a = new int[n];
	return a;
}

int main() {
	int n;
	cin >> n;
	int * arr = getArray(n);

	delete [] arr;
	arr = NULL;
	return 0;
}