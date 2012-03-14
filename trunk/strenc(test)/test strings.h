#ifndef TEST_STRINGS_KEY
	#define TEST_STRINGS_KEY "1iCEVcHQRhf+rkybltGvodTAg6m9XMDp5WuFqxO2/jzZISUenNKL80BJP4w3as7Y"
	#pragma comment(lib, "strenc")
	void StrencDecode(char* buffer, char* Base64CharacterMap);
	const char* GetDecryptedString(const char* encryptedString)
	{
		char string[1024];
		strcpy(string, encryptedString);
		StrencDecode(string, TEST_STRINGS_KEY);
		return string;
	}
	#define INTRO_STRING GetDecryptedString("dHWjXKijXKiWRQtxXJl59Bg5XJtK6T4FfCq1")
	#define SECOND_STRING GetDecryptedString("GHsJhJr5mAl5MBsKmBxU6La1")
	#define THIRD_STRING GetDecryptedString("MHdLMHxU6K1uXAdeMHdLRuiuXOaU11==")
#endif