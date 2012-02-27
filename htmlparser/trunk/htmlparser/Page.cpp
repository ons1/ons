#include "Page.h"
Page::Page()
{
	m_page[0] = 0;
	m_len = 0;
}

Page::Page(char* path)
{
	m_page[0] = 0;
	m_len = 0;
	FILE* stream;
	if ( (stream = fopen(path , "r+t")) == NULL)
	{
		fprintf(stderr,	"Cannot open output file.\n");
	} 
	else
	{
		m_len = fread(m_page , sizeof(char) , MaxPageLen , stream);
		m_page[m_len] = 0;
		fclose(stream);
	}
}