// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;

void* myMemcpy(void* dest, void* src, int n) {
    // Cast src and dest to char* 
	// because we need to copy byte by byte
    char* cDest = (char*)dest;
    char* cSrc = (char*)src;

    // Copy data byte by byte
    for (int i = 0; i < n; i++) 
        cDest[i] = cSrc[i];

    // Return the destination pointer
    return dest;
}

int main() {

	int a = 10 , b;
	myMemcpy(&b , &a , sizeof(int));
	cout << "a "<< a << endl;
	cout << "b "<< b << endl;
	/* output
		a 10
		b 10
	*/

	return 0;
}