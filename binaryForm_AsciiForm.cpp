/*
 ==============================================================================
 Name        : binaryForm_AsciiForm.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : represent in different types
 ==============================================================================
 */
#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

#ifdef _MSC_VER
typedef __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;

#else
#include <stdint.h>
#endif

#include <bitset>

void memcpy1(void* dest,void* src,int s)
{
	 uint32_t *pdest = (uint32_t*) dest;
	 uint32_t *psrc = (uint32_t*)src;

    for(int index = 0; index <  s; index++)
    {
        *(uint32_t*)pdest = *(uint32_t*)psrc;
		cout<<"Actual value: "<< *pdest <<endl;
		bitset<32> x(*pdest);
		cout<<"Binary form: "<<x<<endl;
		cout<<"ASCII char: "<<*(unsigned __int8*)pdest<<endl;
		pdest ++;
        psrc ++;

	}
}

int main()
{
	unsigned int b[6] = {1,2,3,4,4294967295,65};
	unsigned int *dest = new unsigned int[6]; 
	unsigned int *src = b;
	memcpy1(dest,src,6);
	delete dest;
	system ("pause");
	return 0;
}
