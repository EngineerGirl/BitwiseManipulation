/*
 ==============================================================================
 Name        : no_of_ones.cpp
 Author      : Siddhata Patil
 Copyright   : Your copyright notice
 Description : Setting/Clearing/Toggling/Checking a bit
 ==============================================================================
 */

#include <bitset>
int main()
{
	int a=2;
	bitset<8>x(a);
	cout<<x<<endl;	
	a|=1<<5; // Setting
	bitset<8>y(a);
	cout<<y<<endl;
	cout<<a<<endl;
	a&=~(1<<5); // Clearing
	bitset<8>w(a);
	cout<<w<<endl;
	cout<<a<<endl;
	a^=1<<5; //Toggling
	cout<<a<<endl;
	int bit;
	bit=(a>>5)&1; //Checking the bit
	cout<<bit<<endl;
	a^=(-0^a)&(1<<5);
	cout<<a<<endl;

system("pause");
return 0;
}
