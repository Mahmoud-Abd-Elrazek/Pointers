// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;
void F () {
	const int N = 4;
	int ar [N] = {10,20,30,40};

	int* current = ar;
	while (current != ar+N) { 
		cout << current << " " << *current << "\n"; 
		current++;
	} cout << endl;

	for (int* i = ar; i != ar+N ;++i) { 
		cout << *i << " ";
	} cout << endl;

	for (int i = 0 ; i < N ; ++i) {
		cout << (ar+i) << " - " << *(ar+i) << " - " << ar[i] << "\n";
	}
}

void staticArray_2d () { 
    const int N = 3 , M = 4;
    int arr[N][M] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int* ptr = arr[0];
    cout << *(ptr+0) << "\n"; // 1 
    cout << *(ptr + 4) << "\n"; // 5 
    cout << *(ptr + 8) << "\n"; // 9

    int* p = &arr[0][0];
    while (p != arr[0] + (N*M)) { 
        cout << *p << " " ;
        ++p;
    } // 1 2 3 4 5 6 7 8 9 10 11 12
    cout << "\n\n";

    // you can print like this
    for(int i = 0 ; i < N ; ++i) { 
        for (int*p = arr[i] ; p != arr[i]+M ; ++p) { 
            cout << *p << " "; 
        }
        cout << endl;
    }

	int ar3[2][3][4] = 
	{
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}	
		}, 
		{
			{1,1,1,1},
			{2,2,2,2},
			{3,3,3,3}
		}
	};

}
int main() {

}
