#include <iostream>
#include <fstream>
#include <string>

//void removechar( char * p, char c) {
//	if (NULL == p) return;
//	char* pDest = p;
//	while (*p) {
//		if (*p != c) {
//			++* pDest == *p;
//			++p;
//		}
//	}
//	*pDest = '\0';
//}


int main() {

	std::fstream textfile;
	textfile.open("../Unemployment_states_1976toPresent.txt", std::ios::in);//read
	if (!textfile.is_open()) {
		{
			std::cout << "You dumb, wrong path" << std::endl;
		}
	}
	else {
		//Run another function removechar()
		std::string line;

		while (std::getline(textfile, line, '.')) {

			std::cout << line << std::endl;
		}

		textfile.close();

	}



	return 0;
}
