//---------------------------------------------------------------------------

#ifndef CommandListH
#define CommandListH
#include <windows.h>
//---------------------------------------------------------------------------
#endif

class CommandList {

	private:
	HANDLE hcom;
	DCB serie;
	OVERLAPPED over;

	public:

	//unsigned char * trame(unsigned char );

	unsigned char * allumer(unsigned char val);
	unsigned char * zoom(unsigned char val);
	unsigned char * deplaceY(unsigned char val);
	unsigned char * deplaceX(unsigned char val);
};

