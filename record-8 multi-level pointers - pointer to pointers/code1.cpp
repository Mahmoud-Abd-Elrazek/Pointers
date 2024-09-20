// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

#include <iostream>

using namespace std;

int main() {
   
    // © M_Abrazeg
    int x = 10;
    int *p1 = &x;

    int** p2 = &p1;
    int*** p3 = &p2;

    cout << &p3 << endl;
    cout << p3 << endl;
    cout << *p3 << endl;
    cout << **p3 << endl;
    cout << ***p3 << endl;

    return 0;
}