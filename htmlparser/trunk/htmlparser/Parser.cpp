#include "Parser.h"
Parser::Parser()
{
	m_page = Page();
}
Parser::Parser(char* path)
{
	m_page = Page(path); 
}