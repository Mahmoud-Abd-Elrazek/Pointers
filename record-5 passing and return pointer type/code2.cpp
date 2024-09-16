// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <string>
using namespace std;

// @m_abrazeg
string* getEmptyString () { 
	string* s = new string;
	return s;
}
int main() {

	string* handle = getEmptyString();
	*handle = "@m_abrazeg";
	cout << handle << " " << *handle << endl;
	// 0x7a7f18 @m_abrazeg

    delete handle;
    handle = NULL;

	return 0;
}
