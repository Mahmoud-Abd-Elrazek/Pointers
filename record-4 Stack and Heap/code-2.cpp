// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void F1 () { 
    // @m_abrazeg
    int x = 10;
    cout << &x << "\n"; // 0x61fefc

    int* ptr = new int;
    *ptr = 40;

    cout << &ptr << " " << ptr << " " << *ptr << "\n";
    // 0x61fef8 0xf77f18 40

    delete ptr;
    ptr = nullptr;
}

void F2 () { 
    // @m_abrazeg
    
    double* salary = new double(100.15);

    delete salary;
    salary = nullptr;
}

void F3 () { 

    int* p = new int;
    *p = 10;

} // end of the function

void F4 (int n) { 
    int* ar = new int[n];
    for (int i = 0 ; i < n ; ++i) { 
        ar[i] = i+1;
    }
    
    for (int i = 0 ; i < n ; ++i) { 
        cout << ar[i] <<  " " ;
    } // 1 2 3 4 

    delete [] ar;
    ar = nullptr;
} // end of the function


int main() {
    
    

}

