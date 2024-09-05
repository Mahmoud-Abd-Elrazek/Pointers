// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void F1 () {
    
    // @m_abrazeg

    int num = 10;
    cout << &num << "\n" ; // 0x61fea4

    string str = "Koko"; 
    cout << &str << "\n"; // 0x61fe8c

    const double pi = 3.14;  
    cout << &pi << "\n"; // 0x8c7f88

    cout << 0x61fea4 << "\n"; // 6422180
    cout << 0x61fe8c << "\n"; // 6422156
    cout << 0x8c7f88 << "\n"; // 9207688
}

void F2 () {

    // How To Declare Pointers
    int* ptr , N , *p;
    string * str_ptr;

    // Initialize Pointers [ NULL , address of variable ]
    ptr = NULL;
    str_ptr = 0;

    bool isValid = true;
    bool * bl_ptr = &isValid;

    // How To Access Pointers
    cout << &bl_ptr <<" "<< bl_ptr <<" "<< *bl_ptr << "\n";
    // 0x61feb0 0x61feb7 1

    // arrow operator ( -> )
    string handle = "@m_abrazeg";
    string* h = &handle;
    cout << h << " " << &handle << "\n"; // 0x61fee4 0x61fee4

    cout << h->at(0) << " " << handle[0] << "\n"; // @ @

    cout << h->size() << " " << handle.size() << "\n"; // 10 10

    cout << (*h).size() << endl; // 10
}

int main(){
    F1();
    F2();
}

