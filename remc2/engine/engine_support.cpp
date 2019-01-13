#include "engine_support.h"


#ifdef USE_DOSBOX
extern DOS_Device *DOS_CON;
#endif //USE_DOSBOX


//delete after finalization
Bit8u* readbuffer;

char* printbuffer;//char* buffer; // [esp+0h] [ebp-2h]
char* printbuffer2;//char v11; // [esp+40h] [ebp+3Eh]
/*Bit32s x_DWORD_D41A4_x6x = 0;
Bit32s x_DWORD_D41A4_x8x = 0;
Bit32s x_DWORD_D41A4_xAx = -1;
Bit32s x_DWORD_D41A4_xBx = -1;
Bit32s x_DWORD_D41A4_xCx = -1;
Bit32s x_DWORD_D41A4_xDx = -1;
char x_DWORD_D41A4_xB6 = 'C';//2A1644 b6=182
char x_DWORD_D41A4_x16x = '5';//2A15A4 16=22
Bit8u x_DWORD_D41A4_x17x = 0;
Bit8u x_DWORD_D41A4_x18x = 0;
char x_DWORD_D41A4_x19x=0;//2A51BD 19=25
Bit8u x_DWORD_D41A4_x1Ex = 0;
Bit8u x_DWORD_D41A4_x2Bx=0;
Bit8u x_DWORD_D41A4_x2Dx = 0;
Bit32s x_DWORD_D41A4_x33x = 0;
Bit32s x_DWORD_D41A4_x59x = 0;
Bit32s x_DWORD_D41A4_x79x = 0;
Bit32s x_DWORD_D41A4_x7Ax = 0;
Bit32s x_DWORD_D41A4_x7Bx = 0;
Bit32s x_DWORD_D41A4_x7Cx = 0;
Bit32s x_DWORD_D41A4_x7Dx = 0;
Bit32s x_DWORD_D41A4_x7Fx = 0;
//char* char_355198 = "8R5";
Bit32s x_DWORD_D41A4_xB2 = 0;
Bit32s x_DWORD_D41A4_xB4 = 0;
Bit32s x_DWORD_D41A4_xB7 = 0;
Bit32s x_DWORD_D41A4_xBA = 0;
Bit32s x_DWORD_D41A4_xC0 = 0;
Bit32s x_DWORD_D41A4_xCE = 0;
Bit32s x_DWORD_D41A4_xCF = 0;
Bit32s x_DWORD_D41A4_xCD = 0;
Bit32s x_DWORD_D41A4_xD0 = 0;
Bit32s x_DWORD_D41A4_xD8=0;
Bit32s x_DWORD_D41A4_xDC = 0;
Bit32s x_DWORD_D41A4_xE0 = -1;
Bit32s x_DWORD_D41A4_xE1 = -1;
Bit32s x_DWORD_D41A4_xE2=-1;
Bit32s x_DWORD_D41A4_xE6 = -1;
Bit32s x_DWORD_D41A4_xF2 = -1;
Bit32s x_DWORD_D41A4_xF6 = -1;
Bit32s x_DWORD_D41A4_x100 = -1;
Bit32s x_DWORD_D41A4_x235 = -1;
Bit32s x_DWORD_D41A4_x749 = -1;
Bit32s x_DWORD_D41A4_x8CF = -1;
Bit32s x_DWORD_D41A4_x94C = -1;
Bit32s x_DWORD_D41A4_x954 = -1;
Bit32s x_DWORD_D41A4_x21AA = -1;
Bit32s x_DWORD_D41A4_x00 = -1;
Bit32s x_DWORD_D41A4_x9602 = -1;
Bit32s x_DWORD_D41A4_x9603 = -1;
Bit32s x_DWORD_D41A4_x9677 = -1;
Bit32s x_DWORD_D41A4_x967B = -1;
Bit32s x_DWORD_D41A4_x967F = -1;
Bit32s x_DWORD_D41A4_x4 = -1;
Bit32s x_DWORD_D41A4_x965B = -1;
Bit32s x_DWORD_D41A4_x966F = -1;
Bit32s x_DWORD_D41A4_x9683 = -1;
Bit32s x_DWORD_D41A4_x96BF = -1;
Bit32s x_DWORD_D41A4_x9691 = -1;
Bit32s x_DWORD_D41A4_x9692 = -1;*/

//Bit32s x2124_x_DWORD_D41A4_xCx_x_DWORD_D41A0_11234 = 0;

//Bit8u* x_DWORD_E9C38_smalltit; // weak

//Bit32s x_DWORD_D41A4 = -1;

//Bit8u* x_DWORD_D41A0; // weak

Bit8u* x_D41A0_BYTEARRAY_0;
//Bit8u* x_D41A0_BYTEARRAY_4;

type_x_D41A0_BYTEARRAY_4_struct x_D41A0_BYTEARRAY_4_struct;

Bit16s x_D41A0_WORDARRAY[10000];

Bit32u x_D41A0_BYTEARRAY_4_0xE6_heapsize;
Bit8u* x_D41A0_BYTEARRAY_4_0xE2_heapbuffer;
//Bit8u* x_D41A0_BYTEARRAY_4_0xDE_heapbuffer;
//Bit32u* off_D918C[0x7c];//turn off - fix it

//xx Bit8u* dword_E9C30[1000]; // weak



Bit8u* x_DWORD_180628b_screen_buffer; //351628

Bit8u* off_D41A8;//graphics buffer// = (Bit8u*)&x_BYTE_14B4E0; // weak
Bit8u* x_BYTE_14B4E0;

posistruct* xy_DWORD_17DED4_spritestr;
posistruct* xy_DWORD_17DEC0_spritestr;
posistruct* xy_DWORD_17DEC8_spritestr;

posistruct* x_DWORD_D4188t_spritestr;

doublebyte doublebyte_conv(Bit16u a2) {
	doublebyte result;
	result.byte1 = a2 && 0xff;
	result.byte2 = a2 && 0xff00;
	return result;
};

void support_begin() {
    readbuffer = (Bit8u*)malloc(1000000);//fix it max 64000
    printbuffer = (char*)malloc(4096);
    //printbuffer[0] = '\0';
    printbuffer2 = (char*)malloc(4096);
	x_DWORD_180628b_screen_buffer = (Bit8u*)malloc(320000);

	//x_DWORD_E9C38_smalltit= (Bit8u*)malloc(64000);
	//x_D41A0_BYTEARRAY_4_0xDE_heapbuffer= (Bit8u*)malloc(64000);

	/*for (int i = 0;i < 0x1c+0x60;i++)
		off_D918C[i] = new Bit32u;*/
	//2aa18c
	//0 2bc394
	//1
	//2

	/*xx dword_E9C30[0] = new Bit8u[4096];
	for (int i = 0;i <4096;i++)
		dword_E9C30[0][0] = 0;
	dword_E9C30[2] = new Bit8u[4096];
	dword_E9C30[4] = new Bit8u[4096];*/
	//x_D41A0_BYTEARRAY_4_struct.player_name_57 =new char[256];
	x_D41A0_BYTEARRAY_4_struct.savestring_89 = new char[256];

	x_BYTE_14B4E0 = new Bit8u[65536];
	off_D41A8 = new Bit8u[65536];
	memcpy(off_D41A8, &x_BYTE_14B4E0,4);

	xy_DWORD_17DED4_spritestr = new posistruct[1000];
	xy_DWORD_17DEC0_spritestr = new posistruct[1000];
	xy_DWORD_17DEC8_spritestr = new posistruct[1000];

	x_DWORD_D4188t_spritestr = new posistruct[1000];

	x_D41A0_BYTEARRAY_4_struct.harddiskchar_byte4_182 = 0x43;
	//x_D41A0_BYTEARRAY_4_struct.player_name_57 = 0;

    //printbuffer2[0] = '\0';
}
void support_end() {
    free(readbuffer);
    free(printbuffer);//char* buffer; // [esp+0h] [ebp-2h]
    free(printbuffer2);//char v11; // [esp+40h] [ebp+3Eh]
	free(x_DWORD_180628b_screen_buffer);
	//free(x_DWORD_E9C38_smalltit);
	/*for (int i = 0;i < 0x1c;i++)
		free(off_D918C[i]);*/
	//free(x_D41A0_BYTEARRAY_4_0xDE_heapbuffer);
	/*xx free(dword_E9C30[0]);
	free(dword_E9C30[2]);
	free(dword_E9C30[4]);*/
	//free(x_D41A0_BYTEARRAY_4_struct.player_name_57);
	free(x_D41A0_BYTEARRAY_4_struct.savestring_89);

	free(x_BYTE_14B4E0);
	free(off_D41A8);

	free(xy_DWORD_17DED4_spritestr);
	free(xy_DWORD_17DEC0_spritestr);
	free(xy_DWORD_17DEC8_spritestr);

	free(x_DWORD_D4188t_spritestr);
}

void loadfromsnapshot(char* filename, Bit8u* adress, Bit32u adressdos, Bit32u size) {
	char findnamec[500];
	FILE* fptestepc;
	sprintf(findnamec, "../remc2/memimages/engine-memory-%s", filename);
	fopen_s(&fptestepc, findnamec, "rb");	
	fseek(fptestepc, adressdos, SEEK_SET);
	fread_s(adress, size, 1, size, fptestepc);
	fclose(fptestepc);
};

void loadfromsnapshot2(char* filename, Bit8u* adress, Bit32u adressdos, Bit32u size) {
	char findnamec[500];
	FILE* fptestepc;
	Bit32u subadress;
	sprintf(findnamec, "../remc2/memimages/engine-memory-%s", filename);
	fopen_s(&fptestepc, findnamec, "rb");
	fseek(fptestepc, adressdos, SEEK_SET);
	fread_s(&subadress, 4, 1, 4, fptestepc);
	fseek(fptestepc, subadress, SEEK_SET);
	fread_s(adress, size, 1, size, fptestepc);

	fclose(fptestepc);
};


Bit32u compare_with_snapshot(char* filename, Bit8u* adress, Bit32u adressdos, Bit32u size, Bit8u* origbyte, Bit8u* copybyte) {

	char findnamec[500];
	Bit8u* buffer = (Bit8u*)malloc(size);
	FILE* fptestepc;
	sprintf(findnamec, "c:/prenos/remc2/remc2/memimages/engine-memory-%s", filename);
	fopen_s(&fptestepc, findnamec, "rb");
	if (fptestepc == NULL)
	{
		mydelay(100);
		fopen_s(&fptestepc, findnamec, "rb");
	}
	fseek(fptestepc, adressdos, SEEK_SET);
	
	fread_s(buffer, size, 1, size, fptestepc);
	int i;
	for (i = 0;i < size;i++)
	{
		if (buffer[i] != adress[i])
		{
			*origbyte = buffer[i];
			*copybyte = adress[i];
			break;
		}
	}

	free(buffer);
	fclose(fptestepc);
	return(i);
};

void mine_texts(char* filename, Bit32u adressdos, Bit32u count, char* outfilename) {

	char findnamec[500];
	FILE* fptestepc;
	FILE* fileout;
	char actchar;
	char outtext[2048];
	char outtext2[2048];
	sprintf(findnamec, "c:/prenos/remc2/remc2/memimages/engine-memory-%s", filename);
	fopen_s(&fptestepc, findnamec, "rb");
	fopen_s(&fileout, outfilename, "wb");
	if (fptestepc == NULL)
	{
		mydelay(100);
		fopen_s(&fptestepc, findnamec, "rb");
	}
	fseek(fptestepc, adressdos, SEEK_SET);
	long adressadd;
	long adressaddall=0;
	fread_s(&actchar, 1, 1, 1, fptestepc);
	for (int i = 0; i < count; i++)
	{
		adressadd = 0;
		while ((adressaddall % 4)||(actchar==0))
		{
			fread_s(&actchar, 1, 1, 1, fptestepc);
			adressaddall++;
		}
		while(actchar!=0){
			outtext[adressadd] = actchar;
			fread_s(&actchar, 1, 1, 1, fptestepc);
			adressadd++;
			adressaddall++;
		}
		
		outtext[adressadd]=0;
		sprintf(outtext2,"char* off_%05X[1]={%s};\n", 0xDB06C- 0x1131 + adressaddall,outtext);
		if(strlen(outtext2)>1)
			fwrite(outtext2, strlen(outtext2),1, fileout);
	}

	fclose(fptestepc);
	fclose(fileout);
};

void writehex(Bit8u* buffer, Bit32u count) {
	for (int i=0;i < count;i++)
	{
		if (i % 32 == 0)printf("\n");
		printf("%02X", buffer[i]);		
	}
	printf("\n");
};
