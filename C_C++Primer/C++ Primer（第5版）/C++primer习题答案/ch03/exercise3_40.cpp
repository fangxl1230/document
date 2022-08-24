#include <iostream>
#include <cstring>

const char cstr1[] = "Hello";
const char cstr2[] = "world!";

int main()
{
	char cstr3[100];

	strcpy(cstr3, cstr1);
	strcat(cstr3, " ");
	strcat(cstr3, cstr2);

	std::cout << cstr3 << std::endl;
}