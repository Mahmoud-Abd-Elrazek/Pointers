// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;

void* myMemcpy(void* dest, void* src, int n) {
    // Cast src and dest to char* because we need to copy byte by byte
    char* cDest = (char*)dest;
    char* cSrc = (char*)src;

    // Copy data byte by byte
    for (int i = 0; i < n; i++) 
        cDest[i] = cSrc[i];

    // Return the destination pointer
    return dest;
}

int main() {

	// @m_abrazeg
	int sourcAr[] = {1, 2, 3, 4, 5};
	int desAr[5];

	myMemcpy(desAr, sourcAr, sizeof(sourcAr));
	
	for (int i = 0 ; i < 5 ; i++)
		cout << desAr[i] << " ";

    char source[] = "My name is Koko, I'm a computer science student";
	char destenation[100];
	myMemcpy(destenation, source, sizeof(source));
	cout << destenation << "\n";

	return 0;
}
