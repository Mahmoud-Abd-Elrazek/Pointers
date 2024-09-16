// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;


int main() {

	// void pointer is not a pointer to object type

	// @m_abrazeg
	int num = 8;
	float f = 28.28;

	cout << &num << " " << &f << "\n" ; // 0x61ff08 0x61ff04

	void* joker = &num;
	cout << joker << "\n"; // 0x61ff08
	joker = &f ; 
	cout << joker << "\n"; // 0x61ff04

	return 0;
}
