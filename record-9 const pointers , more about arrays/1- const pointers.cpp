// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;

int main() {
    // m_abrazeg
    int x = 10 , y = 20;
    cout << &x << " | " << &y << endl; //0x61fefc | 0x61fef8

    const int* const p = &x;
    cout << &p << " " << p << " " << *p << endl; // 0x61fef4 0x61fefc 10

    // *p = 30; error
    // p = &y; error

    // const pointer to const T
}