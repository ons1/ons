#ifndef PAGE_H_
#define PAGE_H_
#include "string.h"
#include "stdio.h"
#define  MaxPageLen 100000
class Page{
private:
	char m_page[MaxPageLen];	//ҳ������
	unsigned int m_len;	//ҳ�����ݳ���,С��100000

public:
	Page();
	Page(char* path);
};


#endif