#pragma once
#include <sstream>
#include <windows.h>
#include <algorithm>

using namespace std;

#pragma comment(lib, "strenc")
void StrencEncode(char* buffer, int size, char* Base64CharacterMap);
void StrencDecode(char* buffer, char* Base64CharacterMap);

class Base64
{
public:
	static char Base64CharacterMap[];

	static void ShuffleCharacterMap();
	static void Encode(char* buffer, int size);
	static void Decode(char* buffer);
};
