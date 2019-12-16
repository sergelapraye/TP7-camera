//---------------------------------------------------------------------------

#pragma hdrstop

#include "CommandList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

/*
unsigned char CommandList::trame(unsigned char) {

unsigned char * trame_encours = new unsigned char[10];

trame_encours[0] = 0x81;

trame_encours[0]="8101040002ff"; //Allumer la caméra
trame_encours[1]="8101040003ff"; //Éteindre la caméra
trame_encours[2]="8101040700ff"; //Arréter le zoom
trame_encours[3]="8101040732ff"; //Dézoomer
trame_encours[4]="8101040723ff"; //Zoomer
trame_encours[5]="8101060105050303ff"; // Arreter le deplacement
trame_encours[6]="8101060105050301ff"; //Monter la camera
trame_encours[7]="8101060105050302ff"; //Descendre la camera
trame_encours[8]="8101060105050203ff"; //Camera a droite
trame_encours[9]="8101060105050103ff"; //Camera a gauche
trame_encours[10]='\0'
}
*/
unsigned char * CommandList::allumer(unsigned char val)
{
	unsigned char * tr = new unsigned char[6];

	tr[0] = 0x81;
	tr[1] = 0x01;
	tr[2] = 0x04;
	tr[3] = 0x00;
	tr[4] = val;
	tr[5] = 0xff;

	return tr;
}
unsigned char * CommandList::zoom(unsigned char val)
{
	unsigned char * tr = new unsigned char[6];

	tr[0] = 0x81;
	tr[1] = 0x01;
	tr[2] = 0x04;
	tr[3] = 0x07;
	tr[4] = val;
	tr[5] = 0xff;

	return tr;

}
unsigned char * CommandList::deplaceY(unsigned char val)// Haut bas et stop
{
	unsigned char * tr = new unsigned char[9];

	tr[0] = 0x81;
	tr[1] = 0x01;
	tr[2] = 0x06;
	tr[3] = 0x01;
	tr[4] = 0x05;
	tr[5] = 0x05;
	tr[6] = 0x03;
	tr[7] = val;
	tr[8] = 0xff;

	return tr;

}

unsigned char * CommandList::deplaceX(unsigned char val)// Droite et Gauche
{
	unsigned char * tr = new unsigned char[9];

	tr[0] = 0x81;
	tr[1] = 0x01;
	tr[2] = 0x06;
	tr[3] = 0x01;
	tr[4] = 0x05;
	tr[5] = 0x05;
	tr[6] = val;
	tr[7] = 0x03;
	tr[8] = 0xff;

	return tr;

}



