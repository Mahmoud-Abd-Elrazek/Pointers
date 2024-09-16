// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;


int main() {

	// @m_abrazeg
	
	void*p = new string("Koko");
	cout << p << " " << *(string*)p << endl; 
	
	delete (string*)p;
	p = nullptr;

	return 0;
}
