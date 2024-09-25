// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;

int* _1D (int size);
int** _2D (int n , int m);
void init (int*const ar , int n);
void init (int** ar , int n);

void print (int*const ar , int n);
void freeMem (int*ar);
void freeMem (int** ar , int n);

int main() {
    
}

int* _1D (int size) { 
    int*ar = new int[size];
    return ar;
}
void init (int*const ar , int n) { 
    for (int i = 0 ; i < n ; ++i) { 
        ar[i] = -1;
    }
}
void print (int*const ar , int n) { 
    for (int i = 0 ; i < n ; ++i) { 
        cout << ar[i] << " ";
    }
    cout << endl;
}
void freeMem (int* ar) { 
    delete [] ar;
    ar = nullptr;
}
void init (int** ar , int n) { 
    for (int i = 0 ; i < n ; ++i) { 
        ar[i] = nullptr;
    }
}

int** _2D (int n , int m) { 
    int** ar = new int*[n];
    for (int i = 0 ; i < n ; ++i) {
        ar[i] = _1D(m);
        init(ar[i] , m);
    }

    return ar;
}

void freeMem (int** ar , int n) { 
    for (int i = 0 ; i < n ; ++i) {
        freeMem(ar[i]);
    }

    delete[] ar;
    ar = nullptr;
}
