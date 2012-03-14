#ifndef TEST_STRINGS_KEY
	#define TEST_STRINGS_KEY "3/bq+ICvMoeH0ROWJ1rQTUYfkg7lEsAZpcaGj9hnXFxV5tLyBuNP8w4mKiS26Dzd"
	#pragma comment(lib, "strenc")
	void StrencDecode(char* buffer, char* Base64CharacterMap);
	const char* GetDecryptedString(const char* encryptedString)
	{
		char* string = new char[1024];
		strcpy(string, encryptedString);
		StrencDecode(string, TEST_STRINGS_KEY);
		return string;
	}
	#define INTRO_STRING GetDecryptedString("UCcFEN/FEN/cMv19EmJpl4kpEm1NgYiGebj3")
	#define SECOND_STRING GetDecryptedString("rCDmom0p7fJps4DN749LgP63")
	#define THIRD_STRING GetDecryptedString("sCUPsC9LgN3aEfUysCUPMa/aEh6L33==")
#endif