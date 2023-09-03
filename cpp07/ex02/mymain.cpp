#include "Array.hpp"

int main (void) {
	//construction w void
	Array<int> noparam;
	noparam[0] = 1;
	noparam[1] = 2;
	std::cout << noparam[0] << std::endl << noparam[1] << std::endl;
	std::cout << "Size of the arr: " << noparam.size() << std::endl;
	
	//arr of another type
	Array<char> char_arr(10);
	for (int i = 0; i < 10; i++) {
		char_arr[i] = i + 65;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << char_arr[i] << std::endl;
	}
	//copy and assignment and possible segfault / leaks (varsinki voidist kasatut instancet)
	//init by default ???
	//show thrown errors when accessing mem
	// Tip: Try to compile int * a = new int(); then display *a.
	//show deep copy
	//show size
	return (0);
}
