// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <string>
using namespace std;


// @m_abrazeg
bool isEven (int num) { 
	bool ans = (num % 2 == 0);
	return ans;
}
int sumEven (int a , int b) {
	int ans = 0;
	if (isEven(a)) ans += a;
	if (isEven(b)) ans += b;
	return ans;
}
void stackExample () { 
	int a = 10 , b = 4;
	int c = sumEven(a,b);

    cout << c << "\n" ; 	
}

// @m_abrazeg
int gl = 20;
int sum(int x , int y) {
	// &x : 0x61fef0 , &y :0x61fef4 
    return x + y;
}
int main() {
    int x = 40; // 0x61ff0c
    int y = -10; // 0x61ff08

    int *p = &x; // 0x61ff04
    int s = sum(x,y); // 0x61ff00
    cout << s << endl;

	return 0;
}

