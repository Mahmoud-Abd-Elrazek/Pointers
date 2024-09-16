// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;


int main() {

	// @m_abrazeg
	// void pointer is not a pointer-to-object type
	int num = 8;
	float f = 28.28;

	void* p = &num;
	cout << *(int*)p << "\n";  // 8

	p = &f;
	cout << *(float*)p << "\n"; // 28.28

	return 0;
}
