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

void* boolmyMemcpy(void* dest, void* src, int n) {
    bool* bDest = (bool*)dest;
    bool* bSrc = (bool*)src;

    // Copy data byte by byte
    for (int i = 0; i < n; i++)
        bDest[i] = bSrc[i];
    return dest;
}

int main() {
	const int N = 5;
	string names[N] = {"Koko", "Temon",  "Bomba" , "Hazoka" , "Skar"};
	string winners[N];

	myMemcpy(winners, names, sizeof(names));
    
	for (int i = 0 ; i < N ; i++)
		cout << winners[i] << " "; // Koko Temon Bomba Hazoka Skar 

	return 0;
}