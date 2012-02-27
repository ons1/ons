#ifndef PARSER_H_
#define PARSER_H_
#include <string>
#include "Page.h"
#define MaxPathLen 100

#define VERSION_NUMBER  0.1;

class Parser
{
private:
	Page m_page;
	char path[MaxPathLen];
public:
	inline double GetVersion()
	{
		return VERSION_NUMBER;
	}
	Parser(char* path);
	Parser();
};

#endif
