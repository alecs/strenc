#include "StringFile.h"

StringDefinition::StringDefinition(char* name, char* string)
{
	strcpy(this->name, name);
	strcpy(this->string, string);
	this->stringLength = strlen(string)+1;
}
char* StringDefinition::Name()
{
	return this->name;
}
char* StringDefinition::String()
{
	return this->string;
}

int StringDefinition::StringLength()
{
	return this->stringLength;
}


StringFile::StringFile(const char* path)
{
	this->fileStream = new ifstream(path, ifstream::in);
	if (!this->fileStream->is_open()) throw ("Failed to open file!");
}
StringFile::~StringFile()
{
	delete this->fileStream;
}
StringDefinition* StringFile::GetString()
{
	if (!fileStream->eof())
	{
		char name[256];
		char string[4096];

		if (fileStream->getline(name, 256).eof()) throw ("Unexpected end of file!");
		fileStream->getline(string, 1024);

		return new StringDefinition(name, string);
	}
	else
		return NULL;

}
