//---------------------------------------------------------------------------

#pragma hdrstop

#include "COM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


	bool COM::ouverture(){

		hcom=CreateFile(L"COM1",
		GENERIC_WRITE|GENERIC_READ,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_FLAG_NO_BUFFERING,
		NULL);


		if (hcom == INVALID_HANDLE_VALUE) {
		   return false;
		}

		GetCommState(hcom, &serie);
		serie.BaudRate = 9600;
		serie.ByteSize= 8;
		serie.Parity= NOPARITY;
		serie.StopBits = ONESTOPBIT;

		SetCommState(hcom, &serie);
	}



	bool COM::ecriture(wchar_t * str)
	{

		if (hcom == INVALID_HANDLE_VALUE) {
		   return false;
		}

		char * dest = new char[wcslen(str)+1];

		wcstombs(dest, str, wcslen(str));

		dest[wcslen(str)]='\0';

		ecriture(dest, strlen(dest));

		delete dest;
	}

	bool COM::ecriture(char * str)
	{
		ecriture(str, strlen(str) + 1);
	}
	bool COM::ecriture(char * str, int taille)
	{
		unsigned long pt=0;

		WriteFile(hcom, str, taille, &pt, NULL);
		PurgeComm(hcom, PURGE_TXCLEAR);
	}

	bool COM::ecriture(unsigned char * str, int taille)
	{
		unsigned long pt=0;

		WriteFile(hcom, str, taille, &pt, NULL);
		PurgeComm(hcom, PURGE_TXCLEAR);
    }

