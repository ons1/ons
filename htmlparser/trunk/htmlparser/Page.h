#ifndef PAGE_H_
#define PAGE_H_
#include "string.h"
#include "stdio.h"
#define  MaxPageLen 100000
class Page{
private:
	char m_page[MaxPageLen];	//页面内容
	unsigned int m_len;	//页面内容长度,小于100000

public:
	Page();
	Page(char* path);
};


#endif