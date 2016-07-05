/*
 ==============================================================================
 Name        : no_of_ones.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. All rights reserved.
 Description : Setting/Clearing/Toggling/Checking a bit
 ==============================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <bitset>
using namespace std;

int main()
{
	int a=2;
	bitset<8>x(a);
	cout<<x<<endl;	
	a|=1<<5; // Setting
	bitset<8>y(a);
	cout<<"After setting bit no 5: "<<y<<endl;
	cout<<"Decimal equivalent: "<<a<<endl;
	a&=~(1<<5); // Clearing
	bitset<8>w(a);
	cout<<"After clearing bit no 5: "<<w<<endl;
	cout<<"Decimal equivalent: "<<a<<endl;
	a^=1<<5; //Toggling
	cout<<"After Toggling bit no 5: (Decimal equivalent) "<<a<<endl;
	int bit;
	bit=(a>>5)&1; //Checking the bit
	cout<<"Checking the 5th bit (1 or 0): "<<bit<<endl;
	a^=(-0^a)&(1<<5);
	cout<<"Decimal equivalent: "<<a<<endl;

system("pause");
return 0;
}
