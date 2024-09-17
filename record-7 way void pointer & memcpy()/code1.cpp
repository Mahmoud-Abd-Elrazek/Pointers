// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	char source[] = "Hello, World!";
    char destination[20];

    // Copying 13 bytes from source to destination
    memcpy(destination, source, sizeof(source));

    cout << "Copied string: " << destination << endl;
    return 0;
}
