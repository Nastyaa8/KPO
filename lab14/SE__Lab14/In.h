#pragma once
#define IN_MAX_LEN_TEXT 1024*1024
#define IN_CODE_ENDL '\n' 

#define MAX_LEN_LINE 1000
namespace In
{
	void dell_in(char* str, int index);
	struct IN
	{
		enum
		{
			T = 1024,
			F = 2048,
			I = 4096
		};

		int size,
			lines,
			ignor;

		unsigned char* text;

		int code[256] =
		{
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::I, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::I,   '!', IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,
			IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,

			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,
			IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,
			IN::T, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F
		};

		IN()
		{   //пробел        0          2          6          M          A          O          N          K          D          E
			code[32] = code[48] = code[50] = code[54] = code[77] = code[65] = code[79] = code[78] = code[75] = code[68] = code[69] =
				//I         S          m           a          o           n           k           М           А           О           Н
				code[73] = code[83] = code[109] = code[97] = code[116] = code[110] = code[107] = code[204] = code[192] = code[206] = code[205] =
				//Ь          К           Д           Е           И           С           м           а           о           н
				code[220] = code[202] = code[196] = code[197] = code[200] = code[209] = code[236] = code[224] = code[238] = code[237] =
				//ь          к           д           е           и           с
				code[252] = code[234] = code[228] = code[229] = code[232] = code[241] = IN::T;
			code[192] = '-';
			code[88] = IN::I;
		}
	};

	IN getin(wchar_t infile[]);
}
