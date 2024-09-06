// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <string>
using namespace std;

string getBinary(long long N) {
	return N == 0 || N == 1 ? "1" : getBinary(N >> 1) + to_string(N&1);
}
void F1 () { 

    // @m_abrazeg

    long long n = 4554587899965;
	cout << getBinary(n) << '\n';
	cout << 0b1000010010001110010100110000000100000111101 << '\n';
	cout << "byte 1: " << 0b00111101 << '\n'; // 61
	cout << "byte 2: " << 0b00001000 << '\n'; // 8
	cout << "byte 3: " << 0b10011000 << '\n'; // 152
	cout << "byte 4: " << 0b01110010 << '\n'; // 144
	cout << "byte 5: " << 0b00100100 << '\n'; // 36
	cout << "byte 6: " << 0b00000100 << '\n'; // 4

	bool* byte = (bool*)(&n);
	cout << "address of Big Number: " << &n << '\n';
	cout << "address of byte[1] " << byte << " " << *byte << '\n';
	++byte;
	cout << "address of byte[2] " << byte << " " << *byte << '\n';
	++byte;
	cout << "address of byte[3] " << byte << " " << *byte << '\n';
	++byte;
	cout << "address of byte[4] " << byte << " " << *byte << '\n';
	++byte;
	cout << "address of byte[5] " << byte << " " << *byte << '\n';
	++byte;
	cout << "address of byte[6] " << byte << " " << *byte << '\n';
	++byte;

	/*

    byte 1: 61
    byte 2: 8
    byte 3: 152
    byte 4: 114
    byte 5: 36
    byte 6: 4

	address of Big Number: 0x61fee8
	address of byte[1] 0x61fee8 61
	address of byte[2] 0x61fee9 8
	address of byte[3] 0x61feea 152
	address of byte[4] 0x61feeb 114
	address of byte[5] 0x61feec 36
	address of byte[6] 0x61feed 4

	*/

    int size = sizeof(n); // 8
    for (bool* i = (bool*)(&n) ; i != (byte + sizeof(n)) ; i++)
        cout << *i << " ";  
    // output => 61 8 152 114 36 4 0 0  
    cout << "\n";

	int temp = n;
	cout << temp << '\n';
	cout << 0b01110010100110000000100000111101; // 1922566205
	/*
		4 byte -> int
		byte 1 [00111101]
		byte 2 [00001000]
		byte 3 [10011000]
		byte 4 [01110010]
	*/
}
int main(){

    //F1();

}

