// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <string>
using namespace std;

// @m_abrazeg
void printDynamicArray(string* arr, int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {

	int N;
	cin >> N;
	string* list = new string[N];
	for (int i = 0; i < N; i++)
		cin >> list[i];
	printDynamicArray(list, N);

	delete[] list;
	list = NULL;
	
	return 0;
}