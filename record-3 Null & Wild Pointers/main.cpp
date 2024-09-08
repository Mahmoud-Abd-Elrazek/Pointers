// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
using namespace std;

/*
	-- Dereferencing a Pointer means accessing the value stored at the memory address the pointer refers to.


	1] What is a Null Pointer ?
		- A null pointer is a pointer that doesn't point to any valid memory address. 
		It's typically assigned the value nullptr in C++ or NULL in C to indicate that the pointer is not currently referencing any object or memory region.
	

	3]  Why Dereferencing a Null Pointer is Undefined Behavior?
		- No valid memory location: A null pointer does not point to any valid memory location. Attempting to dereference it means you are trying to access memory that doesn't exist or hasn't been allocated.

		- address 0x0 (which is the value of a null pointer) Dereferencing it can cause the program to crash.


	2] Preventing Dereferencing Null 
		To avoid undefined behavior:
			Always check if a pointer is null before dereferencing it.

	
	Summary:

	- Dereferencing a null pointer is undefined because a null pointer does not reference valid memory.
	- Attempting to access memory via a null pointer can lead to crashes, segmentation faults, or access violations.
	- Always check for null pointers before dereferencing them to ensure the pointer is pointing to a valid memory location.


	Wild Pointer:
	- Wild Pointer points to a random, undefined memory address because it hasn’t been initialized.
	- Dereferencing a wild pointer leads to undefined behavior, crashes, or memory corruption.
	- Always initialize pointers to avoid wild pointers and ensure they point to valid memory or nullptr.
*/

void F1 () {

	int x = 10;
	int* p = &x;
	cout << &p << " " << p << " " << *p << "\n"; 
	// dereferencing it is safe


	double* add = nullptr; // null pointer
	cout << *add; // undefined behavior
 
	// ensure the pointer is pointing to a valid memory location.	
	if (add != nullptr) { 
		cout << "Value: " << *add << endl;
	}
	else {
		cout << "Pointer is null, can't dereference." << endl;
	}
}
void F2 () {
	
	int * p; // wild pointer 
	cout << p << " " << *p << "\n"; // garbage values 0x401bab 1528349827

	if (p == nullptr) {
		cout << "Pointer is null, can't dereference." << endl;
	}
	else {
		cout << "Pointer is not null, can dereference." << endl;
	}
	// output: Pointer is not null, can dereference.

	int *ptr ;
	*ptr = 10; // undefined behavior
}
int main() {

	return 0;
}