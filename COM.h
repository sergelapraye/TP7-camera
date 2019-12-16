//---------------------------------------------------------------------------

#ifndef COMH
#define COMH
#include <windows.h>
  //Classe permettant la connexion au port COM
class COM {

	private:
	HANDLE hcom;
	DCB serie;
	OVERLAPPED over;

	public:
	bool ouverture();
	bool ecriture(wchar_t * str);
	bool ecriture(char * str);
	bool ecriture(char * str, int taille);
	bool ecriture(unsigned char * str, int taille);

};

//---------------------------------------------------------------------------
#endif
