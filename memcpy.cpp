/*
 ==============================================================================
 Name        : memcpy.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Implement memcpy using cpp
 ==============================================================================
 */
#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

void memcpy1(unsigned int* dest,unsigned int* src,int s)
{
    for(int index = 0; index <  s; index++)
    {
        dest = src;
		cout<< *dest <<endl;
		bitset<32> x(*dest);
		cout<<x<<endl;
        dest ++;
        src ++;

	}
}

int main()
{
	unsigned int b[5] = {1,2,3,4,4294967295};
	unsigned int *dest = new unsigned int[5]; 
	unsigned int *src = b;
	//int size = 5 * sizeof(int);
	memcpy1(dest,src,5);
	delete dest;
	system ("pause");
	return 0;
}
/*
Printing out just the destination block as a separate function
void print1(int* dest, int size)
{
	cout<<"Just the destination block"<<endl;
	for(int i =0; i<size; i++)
	{
		cout<<*dest<<endl;
		--dest;
	}
}

void memcpy (int* src, int* dest, int size)
{
	for(int i=0;i<size;i++)
	{
	*dest = *src;
	cout<<*dest<<endl;
	src=src+1;
	dest++;
	}
	print1(--dest, size);
}

int main()
{
	int A[3]={1,2,3};
	int *dest = new int[5];
	int *src = A;
	memcpy (src, dest, 3);
	system ("pause");
	return 0;
}
*/
