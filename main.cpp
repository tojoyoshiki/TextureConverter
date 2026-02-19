#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"
#include <Windows.h>

enum Argumet {
	kApplicationPath,
	kFilePath,

	NumArgument
};

int main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		printf(argv[i]);
		printf("Hello World\n");
	}

	assert(argc >= NumArgument);
	
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	TextureConverter converter;

	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	system("pause");
	return 0;
}