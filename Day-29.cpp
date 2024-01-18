//=======================================================================================================
//                                                                                                      =
//............................C string concetination and copying........................................=
//                                                                                                      =
//=======================================================================================================

#define _CRT_SECURE_NO_WARNINGS
#include <cstring> //strlen ,  strcat , strcpy,  strncpy ,strcmp , strstr
#include <iostream>

using namespace std;
int zero() {
	//programs
   /*
   //strlen -->> tells you the length of cstring
   cout << "Strlen ===================================";
   int b = strlen("Helo");
   cout << b << endl;

   // as an array

   char arr[] = "World";
   int c = strlen(arr);
   cout << c << endl;
   */
   // strcat -->> concatinate two arrays
	cout << "Strcat =================================" << endl;
	char len[50] = "Warda";
	char arr[] = " Adan";
	cout << len << endl;
	strcat(len, arr);
	cout << len << endl;



	// strcpy -->> copy one cstring to another/ overwrite ont to another
	cout << "Strcpy =================================" << endl;
	strcpy(len, "XXXXXXXXXXXXXXXX");
	cout << len << endl;

	//strncpy

	cout << "Strncpy =================================" << endl;
	strncpy(len, arr, 2);
	cout << len << endl;

	// strcmp -->> compre cstring

	cout << "strcmp ============================" << endl;
	char a[] = "alli";
	char b[] = "alli";

	if (strcmp(a, b) == 0) {
		cout << "they are same" << endl;
	}
	else {
		cout << "they are not same";
	}
	// can also be used as which letter come first
	char a[] = "alli";
	char b[] = "blli";

	if (strcmp(a, b) < 0) {
		cout << "a come before b" << endl;
	}
	else {
		cout << "b before a";
	}
	return 0;
}
/*
int one() {
	//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
	//                  code as used in video
	//'''''''''''''''''''''''''''''''''''''''''''''''''''''''

	// std:istrcpy - signature : char* strcpy(char* dest, const chart src).

	cout << "=======================code One======================================="<<endl;
		std::cout << std::endl;

		std::cout << "std::strcpy "
		<< std::endl;
		const char* source3 = "C++ is a multipurpose programming langauge.";
		char* dest3 = new char[std::strlen(source3) + 1];// +1 for the null character
		//Contains garbage data
		//Not initialized
		std::strcpy(dest3, source3);

		std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
		std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
		std::cout << "dest3"
		<< dest3 << std::endl;

		return 0;
}
int two() {
	cout << "=======================code two=======================================" << endl;
	//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
	//                   std::strncpy : Copying strings
	//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
		// std::strncpy : Copy n characters from src to dest
		// signature : char* strncpy(char "dest, const char *src, std::size_t count );
			std::cout << std::endl;
	std::cout << "std::strncpy:" << std::endl;
	const char* source4 = "Hello";
		char dest4[] = { 'a', 'b', 'C','d', 'e','f','\0' }; // Have to put the terminating
														  //nul1 char if we want to print
			std::cout << "dest4 " << dest4 << std::endl;
	std::cout << "Copying... "<< std::endl;
		std::strncpy(dest4, source4, 5);
		std::cout << "dest4"
			<< dest4 << std::endl;

		return 0;
}
int thr() {
	cout << "=======================code Three=======================================" << endl;
	// Concatcnation
		std::cout << std::endl;
	std::cout << "std::strcat"<<std::endl;
	// doc : https://en.cppreference.com/w/cpp/string/byte/strcat
	char dest[50]= "Hello ";
	char src[50] = "World!";
	std::strcat(dest, src); // Some compilers (MSVC) think these functions are unsafe
	std::strcat(dest, " Goodbye World!");
	std::cout << "dest"<< dest << std::endl;
	return 0;
}

int four() {
	//''''''''''''''''''''''''''''''''''''''''''''''''
	//char* strcpy(char* dest, const char* src);
	//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

	cout << "=======================code Four=======================================" << endl;
	const char* src = "Take the test.";
	//  src[0] = 'M'; // can't modify string literal
	auto dst = std::make_unique<char[]>(std::strlen(src) + 1); // +1 for null terminator
	std::strcpy(dst.get(), src);
	dst[0] = 'M';
	std::cout << src << '\n' << dst.get() << '\n';

	return 0;
}
*/
int main()
{
	zero();
	//one();
	//two();
	//thr();
	//four();
}
